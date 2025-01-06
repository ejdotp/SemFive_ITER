/*
int m = 10, n = 5;
int *mp, *np;
mp = &m;
np = &n;
*mp = *mp + *np;
*np = *mp - *np;
printf("%d %d\n%d %d\n", m, *mp, n, *np); // line-1
/



#include <stdio.h>

int main() {
    int m = 10, n = 5; // Initialize variables
    int *mp, *np;      // Declare pointer variables

    mp = &m;           // mp points to m
    np = &n;           // np points to n

    *mp = *mp + *np;   // m = m + n => m = 10 + 5 = 15
    *np = *mp - *np;   // n = m - n => n = 15 - 5 = 10

    // Print the values
    printf("%d %d\n%d %d\n", m, *mp, n, *np); // line-1

    return 0; // Return success
}