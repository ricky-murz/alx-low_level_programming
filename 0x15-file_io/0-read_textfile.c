#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* read_textfile - Reads and prints a text file to POSIX standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters read and printed, or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t bytesRead, bytesWritten;

if (filename == NULL)
return (0);

file = fopen(filename, "r");
if (file == NULL)
return (0);

buffer = malloc(letters + 1);  /* +1 for null terminator */
if (buffer == NULL)
{
fclose(file);
return (0);
}

bytesRead = fread(buffer, 1, letters, file);
if (bytesRead <= 0)
{
fclose(file);
free(buffer);
return (0);
}

buffer[bytesRead] = '\0';  /* Null-terminate the buffer */

bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesWritten != bytesRead)
{
fclose(file);
free(buffer);
return (0);
}

fclose(file);
free(buffer);

return (bytesWritten);
}

