#include <stdio.h>
#include <stdlib.h>

#define critT 23.0 
#define maxtemp 50.0 

float CtoF(float C) {
    return (C * 9.0 / 5.0) + 32.0;
}

int main() {
    FILE *file = fopen("temperatures.txt", "r");
    if (!file) {
        printf("Error: Unable to open the file 'temperatures.txt'.\n");
        return 1;
    }

    printf("%-10s %-10s %-10s\n", "Temp Obs", "Temp (F)", "Status");
    printf("-----------------------------------\n");

    float C;
    int obs = 1;

    while (fscanf(file, "%f", &C) == 1) {
        float F = CtoF(C);
        const char *status;

        if (F < critT) {
            status = "Below";
        } else if (F > maxtemp) {
            status = "Above";
        } else {
            status = "Right";
        }

        printf("%-10d %-10.2f %-10s\n", C, F, status);
    }

    fclose(file);
    return 0;
}

