#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
* read_write_file - Copies the content of one file to another.
* @file_from: The source file to read from.
* @file_to: The destination file to write to.
*
* Return: 1 on success, -1 on failure.
*/
int read_write_file(const char *file_from, const char *file_to);

/**
* close_files - Closes file descriptors.
* @fd_from: The file descriptor of the source file.
* @fd_to: The file descriptor of the destination file.
*/
void close_files(int fd_from, int fd_to);

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments.
*
* Return: 0 on success, or the corresponding error code on failure.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

if (read_write_file(argv[1], argv[2]) == -1)
exit(99);

return (0);
}

/**
* read_write_file - Copies the content of one file to another.
* @file_from: The source file to read from.
* @file_to: The destination file to write to.
*
* Return: 1 on success, -1 on failure.
*/
int read_write_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
return (-1);
}

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd_from);
return (-1);
}

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close_files(fd_from, fd_to);
return (-1);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close_files(fd_from, fd_to);
return (-1);
}

close_files(fd_from, fd_to);
return (1);
}

/**
* close_files - Closes file descriptors.
* @fd_from: The file descriptor of the source file.
* @fd_to: The file descriptor of the destination file.
*/
void close_files(int fd_from, int fd_to)
{
if (close(fd_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);

if (close(fd_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
}

