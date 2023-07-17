#include <stdio.h>
#include <string.h>

int main() {
    const char* path = __FILE__;
    const char* filename = strrchr(path, '/');
    if (filename)
        printf("%s\n", filename + 1);
    else
        printf("%s\n", path);
    return 0;
}

