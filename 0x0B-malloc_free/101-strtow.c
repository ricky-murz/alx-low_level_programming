#include "main.h"
#include <stdlib.h>
#include <string.h>

#define DELIMITER ' '

/**
* count_words - Counts the number of words in a string.
* @str: The string to count words from.
*
* Return: The number of words.
*/
int count_words(char *str)
{
int word_count = 0, in_word = 0;

for (; *str != '\0'; str++)
{
if (*str != DELIMITER && !in_word)
{
in_word = 1;
word_count++;
}
else if (*str == DELIMITER && in_word)
in_word = 0;
}

return (word_count);
}

/**
* allocate_words - Allocates memory for an array of words.
* @word_count: The number of words to allocate.
*
* Return: A pointer to the allocated array of words.
*/
char **allocate_words(int word_count)
{
char **words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

return (words);
}

/**
* extract_word - Extracts a word from a string.
* @str: The string to extract the word from.
* @start: The starting index of the word.
* @length: The length of the word.
*
* Return: A pointer to the extracted word.
*/
char *extract_word(char *str, int start, int length)
{
char *word = malloc((length + 1) * sizeof(char));
if (word == NULL)
return (NULL);

strncpy(word, str + start, length);
word[length] = '\0';

return (word);
}

/**
* extract_words - Extracts words from a string and stores them in the words array.
* @str: The string to extract words from.
* @words: The array to store the extracted words.
*
* Return: 1 if successful, 0 otherwise.
*/
int extract_words(char *str, char **words)
{
int in_word = 0, k = 0, length = 0;
char *word;

for (; *str != '\0'; str++)
{
if (*str != DELIMITER && !in_word)
{
in_word = 1;
length = 1;
}
else if (*str != DELIMITER && in_word)
length++;
else if (*str == DELIMITER && in_word)
{
word = extract_word(str, -length, length);
if (word == NULL)
goto cleanup;

words[k] = word;
k++;
in_word = 0;
}
}

if (in_word || length > 0)  // Handle case where input has trailing spaces
{
word = extract_word(str, -length, length);
if (word == NULL)
goto cleanup;

words[k] = word;
k++;
}

words[k] = NULL;

return (1);

cleanup:
while (k > 0)
free(words[--k]);
free(words);
return (0);
}

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
int word_count;
char **words;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
words = allocate_words(word_count);
if (words == NULL)
return (NULL);

if (!extract_words(str, words))
{
free(words);
return (NULL);
}

return (words);
}

