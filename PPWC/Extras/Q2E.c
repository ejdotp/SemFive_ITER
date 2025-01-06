//FIND INDEX OF MINIMUM ELEMENT IN AN ARRAY OF 10 ELEMENTS WITHOUT BUILTIN FUNCS

#include <stdio.h>

int findMinIndex(int *, int);

int main() {
    int ar[] = {6, 3, 7, 1, 3, 4, 9, 2, 5, 7}; 
    int *p = ar;
    int minIndex = findMinIndex(p, 10); 
    printf("Index of min element: %d\n", minIndex);
    return 0;
}

int findMinIndex(int *p, int n) {
    int minIndex = 0;  
    for (int i = 1; i < n; i++) {  
        if (*(p + i) < *(p + minIndex)) { 
            minIndex = i; 
        }
    }
    return minIndex;
}

