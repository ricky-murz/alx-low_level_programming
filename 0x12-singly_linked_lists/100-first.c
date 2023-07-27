#include <stdio.h>

/* Function to be executed before the main function */
void pre_main_execution(void) __attribute__((constructor));

/**
 * pre_main_execution - Function to print a message before the main function
 * is executed.
 *
 * Description: This function is automatically executed
 * before the `main` function is called.
 * It prints the message to the standard output.
 */
void pre_main_execution(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
