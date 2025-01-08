#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void reverseString(char *str, char *reversed) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    char binary[32] = {0}; // To store the binary representation
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        // Child process: Compute binary representation
        int index = 0, temp = n;
        if (temp == 0) {
            binary[index++] = '0';
        } else {
            while (temp > 0) {
                binary[index++] = (temp % 2) + '0';
                temp /= 2;
            }
        }
        binary[index] = '\0';
        // Reverse the binary string to get the correct representation
        strrev(binary);
        printf("Binary representation of %d: %s\n", n, binary);
        exit(0);
    } else {
        // Parent process
        wait(NULL); // Wait for the child to finish

        // Read binary representation from the child process
        int index = 0, temp = n;
        if (temp == 0) {
            binary[index++] = '0';
        } else {
            while (temp > 0) {
                binary[index++] = (temp % 2) + '0';
                temp /= 2;
            }
        }
        binary[index] = '\0';
        strrev(binary);

        // Check if the binary representation is a palindrome
        char reversed[32] = {0};
        reverseString(binary, reversed);

        if (strcmp(binary, reversed) == 0) {
            printf("The binary representation of %d is a palindrome.\n", n);
        } else {
            printf("The binary representation of %d is not a palindrome.\n", n);
        }
    }

    return 0;
}
