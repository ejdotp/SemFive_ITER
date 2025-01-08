#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char str[100], reversed[100];
    int isPalindrome = 1; // Flag for palindrome check

    printf("Enter a string: ");
    scanf("%s", str);

    // Length of the string
    int len = strlen(str);

    if (vfork() == 0) {
        // Child process: Reverse the string
        for (int i = 0; i < len; i++) {
            reversed[i] = str[len - i - 1];
        }
        reversed[len] = '\0'; // Null-terminate the reversed string
        _exit(0); // Exit child process
    }

    // Parent process: Check if the string is a palindrome
    for (int i = 0; i < len; i++) {
        if (str[i] != reversed[i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output the result
    printf("\nOriginal String: %s\n", str);
    printf("Reversed String: %s\n", reversed);
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
