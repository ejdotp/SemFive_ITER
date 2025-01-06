#include <stdio.h>
#include <string.h>

void binaryToHexadecimal(char *binary) {
    int len = strlen(binary);
    int decimal = 0;

    // Convert binary to decimal using bitwise operations
    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {
            decimal = (decimal << 1) | 1;  // Left shift and add 1
        } else if (binary[i] == '0') {
            decimal = decimal << 1;  // Just left shift
        }
    }

    // Print the hexadecimal equivalent of decimal
    printf("The hexadecimal equivalent is: %X\n", decimal);
}

int main() {
    char binary[65];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Check if the binary number contains only 0s and 1s
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number!\n");
            return 1;
        }
    }

    binaryToHexadecimal(binary);

    return 0;
}