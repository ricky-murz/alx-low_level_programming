#include <stdio.h>

/**
 * print_message - This function serves as a constructor
 * and is executed before main.
 *
 * Description: This function prints the message
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n".
 */
void first(void) __attribute__((constructor));

void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
