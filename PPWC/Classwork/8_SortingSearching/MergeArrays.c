//Merging two sorted arrays:

#include <stdio.h>

void mergeem(int *, int *, int *, int, int);

int main(){
    int a1[] = {1, 3, 5, 7};
    int a2[] = {2, 4, 6, 8, 10};
    int m[9];
    mergeem(a1, a2, m, 4, 5);

    for(int i = 0; i < 9; i++){
        printf("%d, ", m[i]);
    }
    return 0;
}

void mergeem(int *p1, int *p2, int *p3, int n1, int n2){
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(*(p1 + i) < *(p2 + j)){
            *(p3 + k) = *(p1 + i);
            i++;
        } else {
            *(p3 + k) = *(p2 + j);
            j++;
        }
        k++;
    }

    while(i < n1){
        *(p3 + k) = *(p1 + i);
        i++;
        k++;
    }

    while(j < n2){
        *(p3 + k) = *(p2 + j);
        j++;
        k++;
    }
}

