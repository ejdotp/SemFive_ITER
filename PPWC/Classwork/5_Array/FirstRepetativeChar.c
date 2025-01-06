#include <stdio.h>
#include <string.h>

char findFirstRepetitiveChar(char *str) {
    int freq[256] = {0};  // Frequency array for all ASCII characters

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;  // Increment frequency of the character
        if (freq[str[i]] > 1) {
            return str[i];  // Return the first repetitive character
        }
    }
    
    return '\0';  // Return null character if no repetition is found
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    char result = findFirstRepetitiveChar(str);
    
    if (result != '\0') {
        printf("The first repetitive character in the string \"%s\" is '%c'.\n", str, result);
    } else {
        printf("No repetitive characters found in the string \"%s\".\n", str);
    }
    
    return 0;
}
