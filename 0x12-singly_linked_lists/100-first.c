#include <stdio.h>

/*
 * This function serves as a constructor function,
 * designated with the attribute.
 * It will be automatically executed before the main function starts.
 */
void __attribute__((constructor)) print_message() {
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
