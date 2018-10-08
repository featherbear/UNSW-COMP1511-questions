// This program prints out the last number in `array`

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(int argc, char **argv, char **envp) {

    int array[SIZE] = {2, 3, 1, 25, 38, 24, 92, 62, 6, 66, 32, 94, 58, 38, 33, 83, 15, 10, 43, 56, 24, 95, 68, 13, 18, 56, 60, 48, 31, 16, 57, 95, 16, 22, 80, 68, 58, 15, 94, 5, 82, 18, 57, 38, 58, 45, 82, 26, 24, 1, 31, 36, 87, 45, 96, 75, 77, 6, 34, 82, 6, 100, 95, 68, 17, 75, 97, 62, 84, 90, 53, 53, 58, 45, 35, 30, 25, 14, 84, 26, 9, 55, 25, 89, 65, 74, 74, 97, 9, 9, 96, 14, 59, 40, 9, 48, 30, 82, 20, 34};

    printf("The last number in the array is: %d!\n", array[SIZE]);
    return 0;
}
