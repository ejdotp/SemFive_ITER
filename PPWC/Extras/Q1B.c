#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strrev_custom(char* str) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void strlwr_custom(char* str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

int main() {
    char pres[] = "Edison, Thomas Alva";
    char tmp1[20];
    char tmp2[20];

    strncpy(tmp1, &pres[8], 5);
    tmp1[5] = '\0'; 
    strlwr_custom(tmp1); 
    strrev_custom(tmp1);  

    strncpy(tmp2, &pres[14], 4);
    tmp2[4] = '\0';  

    strcat(tmp1, " ");
    strcat(tmp1, tmp2);

    printf("%s\n", tmp1);

    return 0;
}

