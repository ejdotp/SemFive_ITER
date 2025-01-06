//Merging two sorted arrays:

#include <stdio.h>
void merge(int a1[], int a2[], int s1, int s2, int m[]);

int main(){
    int a1[] = {5, 7, 4, 5, 8};
    int a2[] = {12, 16, 20, 19, 14};
    int s1 = sizeof(a1)/sizeof(a1[0]);
    int s2 = sizeof(a2)/sizeof(a2[0]);
    int m[s1+s2];

	merge(a1, a2, s1, s2, m);
	
    for(int i = 0; i < (s1+s2); i++){
        printf("%d, ", m[i]);
    }
    
    return 0;
}

void merge(int a1[], int a2[], int s1, int s2, int m[]){
	int i = 0, j = 0, k = 0;
	
	for(int l = 0; l < (s1+s2); l++){
		if(l%2==0 && i<s1){
			m[k] = a1[i];
			i++;
			k++;
		}else{
			m[k] = a2[j];
			j++;
			k++;
		}
	}
}


