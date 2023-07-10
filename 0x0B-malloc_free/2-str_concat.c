#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int s1_len = 0, s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	concatenated = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strcpy(concatenated + s1_len, s2);

	return (concatenated);
}

