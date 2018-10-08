// This program divides the number 52000 by a number
// If the number entered is zero, an error is shown and the program will exit

#include <stdio.h>

int main(int argc, char **argv, char **envp) {

    int number = 0;
    printf("We are going to divide the 52000 by a number...\n");
    printf("Choose a number: ");

    scanf("%d", &number);
    if (number == 0)
        printf("Cannot divide by zero!\n");
        exit(1);

    printf("52000 divided by %d is %d!\n", number, 52000 / number);
    return 0;
}