#include "main.h"
#include <stdlib.h>
#include <string.h>

#define DELIMITER ' '

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, word_count = 0, length = 0, position = 0;
	int in_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != DELIMITER && !in_word)
		{
			word_count++;
			in_word = 1;
		}
		else if (str[i] == DELIMITER)
		{
			in_word = 0;
		}
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Split the string into words */
	in_word = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != DELIMITER && !in_word)
		{
			in_word = 1;
			length = 1;
			position = i;
		}
		else if (str[i] != DELIMITER && in_word)
		{
			length++;
		}
		else if (str[i] == DELIMITER && in_word)
		{
			words[j] = malloc((length + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				/* Free previously allocated memory */
				for (i = 0; i < j; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}

			strncpy(words[j], &str[position], length);
			words[j][length] = '\0';
			j++;
			in_word = 0;
		}
	}

	if (in_word)
	{
		words[j] = malloc((length + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			/* Free previously allocated memory */
			for (i = 0; i < j; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		strncpy(words[j], &str[position], length);
		words[j][length] = '\0';
		j++;
	}

	words[j] = NULL;

	return (words);
}

