#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return:
 * - Negative integer if s1 is less than s2.
 * - Positive integer if s1 is greater than s2.
 * - 0 if s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}

