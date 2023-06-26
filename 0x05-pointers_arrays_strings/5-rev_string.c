#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	if (s != NULL)
	{
		int length = 0;
		int start = 0;
		int end = 0;
		char temp;

		/* Calculate the length of the string */
		while (s[length] != '\0')
		{
			length++;
		}

		/* Reverse the string by swapping characters */
		end = length - 1;
		while (start < end)
		{
			temp = s[start];
			s[start] = s[end];
			s[end] = temp;
			start++;
			end--;
		}
	}
}

