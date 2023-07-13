#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - Concatenates two strings with a limit on the number of characters from the second string.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of characters from s2 to concatenate.
*
* Return: On success, a pointer to the concatenated string.
*         On failure, NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len, s2_len, concat_len;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = strlen(s1);
s2_len = strlen(s2);
concat_len = s1_len + (n < s2_len ? n : s2_len);

result = (char *)malloc((concat_len + 1) * sizeof(char));
if (result == NULL)
return (NULL);

memcpy(result, s1, s1_len);
memcpy(result + s1_len, s2, n < s2_len ? n : s2_len);
result[concat_len] = '\0';

return (result);
}

