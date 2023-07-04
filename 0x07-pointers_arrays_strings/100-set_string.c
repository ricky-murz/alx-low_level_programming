#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - Sets the value of a pointer to a string
 * @s: Pointer to a pointer to a string
 * @to: Pointer to a string to be set
 */
void set_string(char **s, char *to)
{
    if (*s != NULL)
    {
        free(*s);
    }

    size_t length = strlen(to) + 1;
    *s = malloc(length * sizeof(char));

    strcpy(*s, to);
}

int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = NULL;

    set_string(&s1, s0);

    printf("%s, %s\n", s0, s1); /* Output: Bob Dylan, Bob Dylan */

    set_string(&s1, "Robert Allen");

    printf("%s, %s\n", s1, s1); /* Output: Robert Allen, Robert Allen */

    return 0;
}

