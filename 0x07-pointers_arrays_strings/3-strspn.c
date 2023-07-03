#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets length of prefix substring consisting only bytes from accept.
 *
 * @s: Pointer to the string to be analyzed.
 * @accept: Pointer to the string of accepted characters.
 *
 * Return: No. of bytes initial segment of s consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int is_accept = 1;
while (*s != '\0' && is_accept)
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
break;
}
a++;
}
if (*a == '\0')
{
is_accept = 0;
}
else
{
count++;
}
s++;
}
return (count);
}
