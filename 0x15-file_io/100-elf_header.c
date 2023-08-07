#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* print_elf_header_info - Prints the information contained in the ELF header.
* @header: Pointer to the ELF header structure.
*/
void print_elf_header_info(Elf64_Ehdr *header);

int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
exit(98);
}

if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file %s\n", argv[1]);
close(fd);
exit(98);
}

close(fd);

if (header.e_ident[EI_MAG0] != ELFMAG0 || 
header.e_ident[EI_MAG1] != ELFMAG1 || 
header.e_ident[EI_MAG2] != ELFMAG2 || 
header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
exit(98);
}

print_elf_header_info(&header);

return 0;
}

/**
* print_elf_header_info - Prints the information contained in the ELF header.
* @header: Pointer to the ELF header structure.
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
int i;

printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");

printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
printf("Version: %d\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: %s\n", "UNIX System V ABI");
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: %d\n", header->e_type);
printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

