#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes)
{
    /* The main function is at a higher address in memory,
     * so we can't access its opcodes directly.
     * Therefore, we'll call a dummy function and extract its opcodes.
     */

    /* A simple dummy function that does nothing. */
    void dummy_function() {}

    /* Calculate the distance between the dummy_function and the main function. */
    int distance = (int)((char *)&dummy_function - (char *)&main);

    /* Check if the number of bytes is negative. */
    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    /* Print the opcodes. */
    for (int i = 0; i < num_bytes; i++)
    {
        printf("%02x", *((unsigned char *)&main + distance + i));
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    /* Check if the correct number of arguments is provided. */
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    /* Convert the argument to an integer. */
    int num_bytes = atoi(argv[1]);

    /* Print the opcodes. */
    print_opcodes(num_bytes);

    return 0;
}

