#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string based on specified separators
 * @str: The input string to be capitalized
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *str)
{
int capitalize = 1;

for (int i = 0; str[i] != '\0'; i++)
{
if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' || str[i] == '}')
{
capitalize = 1; /* Set flag to capitalize the next character */
}
else if (capitalize)
{
str[i] = toupper(str[i]); /* Capitalize the current character */
capitalize = 0; /* Reset flag */
}
}

return (str);
}

