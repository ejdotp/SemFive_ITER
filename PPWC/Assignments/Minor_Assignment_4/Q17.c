#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Define the strings (character arrays)
    char str1[] = "mine";
    char str2[] = "cs";
    char str3[] = "sc";
    char str4[] = "soa";
    char *argv[5]; // Array of pointers to strings

    // Initialize the array of pointers
    argv[0] = str1;
    argv[1] = str2;
    argv[2] = str3;
    argv[3] = str4;
    argv[4] = NULL; // End of array marked by NULL

    // Convert each string to uppercase
    for (int i = 0; argv[i] != NULL; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            argv[i][j] = toupper(argv[i][j]);
        }
    }

    // Display the strings
    printf("Strings in uppercase:\n");
    for (int i = 0; argv[i] != NULL; i++) {
        printf("%s\n", argv[i]);
    }

    return 0; // Return success
}