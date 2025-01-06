//max and min element of array using array of pointers:
#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40, e = 50;  
	int *ptr[5] = {&a, &b, &c, &d, &e};

    int *min = ptr[0];
    int *max = ptr[0];

    for (int i = 1; i < 5; i++) {
        if (*ptr[i] < *min)
            min = ptr[i];
        if (*ptr[i] > *max)
            max = ptr[i];
    }

    printf("Min: %d\n", *min);
    printf("Max: %d\n", *max);

    return 0;
}

