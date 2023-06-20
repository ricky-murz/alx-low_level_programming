/**
 * print_alphabet - Prints the lowercase alphabet 10 times, followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
    char c;
    int i;

    for (i = 0; i < 10; i++) {
        for (c = 'a'; c <= 'z'; c++) {
            putchar(c);
        }
        putchar('\n');
    }
}
