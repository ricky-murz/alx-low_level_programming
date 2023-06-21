#include "main.h"

void print_numbers(int n)
{
    if (n < 1 || n > 98)
        return;

    int i;
    for (i = n; i < 98; i++)
        printf("%d, ", i);

    printf("98\n");
}
