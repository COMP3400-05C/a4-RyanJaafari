#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>   


// TODO: Include more header files (read the manpages to find out more!)

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        puts("ERROR: No arguments");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        const char *p = argv[i];
        while (*p) {
            putchar(toupper((unsigned char)*p));
            p++;
        }
        if (i < argc - 1) putchar(',');
    }
    putchar('\n');
    return 0;
}