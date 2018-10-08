// This program prints out the number entered by the user

#include <stdio.h>

int main(int argc, char **argv, char **envp) {

    int number;
    printf("Enter a number: ");
    scanf("%d", number);

    printf("\nYou entered the number: %d!\n", number);

    return 0;
}