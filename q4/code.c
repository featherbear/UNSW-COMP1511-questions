// This program reads the first line of a file
// If the file cannot be read, an error is printed out

#include <stdio.h>

int main(int argc, char **argv, char **envp) {

    if (argc == 1) {
        printf("Usage: %s file\n", argv[0]);
        return 1;
    }

    char buffer[100];

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
	printf("Could not open file!\n");
    } else {  
        fgets(buffer, 100, file);
        puts(buffer);
        fclose(file);
}
    return 0;
}
