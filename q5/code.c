// Hello, World!

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv, char **envp) {

    if (argc == 1) {
        printf("Usage: %s name\n", argv[0]);
        return 1;
    }

    char *string = "Hello  ";
    strcat(string, argv[1]);
    strcat(string, "!\n");
    string[5] = ',';

    puts(string);

    return 0;
}