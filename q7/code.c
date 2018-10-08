// This program checks if a number is an even number or an odd number

#include <stdio.h>
#include <stdlib.h>

#define TRUE  0
#define FALSE 1

int isEven(int num) {
    if (num % 2 == 0) {
        return TRUE;
    }
    return FALSE;
}

int main(int argc, char **argv, char **envp) {
    int number;
    scanf("%d", &number);
    if (isEven(number)) {
        printf("%d is even\n", number);
    } else{
        printf("%d is odd\n", number);
    }
    return 0;
}