#include <stdio.h>

char *_strcat(char *dest, char *src) {
    char *p = dest;
    while (*p != '\0') {
        p++;
    }
    while (*src != '\0') {
        *p = *src;
        p++;
        src++;
    }
    *p = '\0';
    return dest;
}

int main() {
    char str1[100] = "Hello";
    char str2[] = " world!";
    _strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
