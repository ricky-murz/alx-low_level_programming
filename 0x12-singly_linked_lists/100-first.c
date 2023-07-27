#include <stdio.h>

void first(void) __attribute__((constructor));

/*
 * first - This function serves as a constructor
 * and is executed before main.
 *
 * Description: This function prints the message
 * before the main function is executed
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
