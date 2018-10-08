// This program checks for which letters are a vowel in the given input

#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0

int isAVowel(char ch) {
    if (ch == 'a' || 'e' || 'i' || 'o' || 'u') {
        return TRUE;
    }
    return FALSE;
}

int main(int argc, char **argv, char **envp) {

    char string[100] = {'\0'};
    fgets(string, 100, stdin);
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || string[i] == '\n') printf("\n");
        else if (isAVowel(string[i])) {
            printf("%c is a vowel!\n", string[i]);
        } else {
            printf("%c is not a vowel!\n", string[i]);
        }
    }
    return 0;
}