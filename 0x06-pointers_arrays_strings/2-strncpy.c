#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

    /* Copy characters from src to dest */
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

    /* Pad with null terminators if needed */
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
