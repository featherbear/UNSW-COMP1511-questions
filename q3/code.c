// This program prints numbers up to (not including) 10

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp) {
    int i;

    while (i < 10) {
        printf("%d\n", i++);
    }
    return 0;
}