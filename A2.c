#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>

#define FILENAME "textfile.txt"

void toUpper() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        perror("Error opening file for reading");
        exit(1);
    }

    FILE *temp = fopen("temp.txt", "w");
    if (!temp) {
        perror("Error opening temporary file");
        fclose(file);
        exit(1);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(toupper(ch), temp);
    }

    fclose(file);
    fclose(temp);
    
    remove(FILENAME);
    rename("temp.txt", FILENAME);
}

void printFile() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        perror("Error opening file for reading");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main() {
    pid_t child1, child2;

    FILE *file = fopen(FILENAME, "w");
    if (!file) {
        perror("Error opening file for writing");
        return 1;
    }

    printf("Enter lines of text (type 'END' to finish):\n");
    char line[256];
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (line[0] == 'E' && line[1] == 'N' && line[2] == 'D' && (line[3] == '\n' || line[3] == '\0')) {
            break;
        }
        fputs(line, file);
    }
    fclose(file);

    if ((child1 = fork()) == 0) {
        toUpper();
        exit(0);
    }

    waitpid(child1, NULL, 0);

    if ((child2 = fork()) == 0) {
        printFile();
        exit(0);
    }

    waitpid(child2, NULL, 0);

    printf("\nAll processes completed successfully.\n");

    return 0;
}
