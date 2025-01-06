#include <stdio.h>
void display(int);

int main(){
	int m1;
	int a = 10, b = 20, c = 30;
	m1 = a > b ? a : c > a ? c : b;
	display(m1);
	printf("m1=%d\n\nPart 2:\n", m1);
	
	//part 2:
	int ar[4][5] = {
		{0, 9, 1, 7, 0},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{22, 24, 26, 28, 30}
	};
	printf("%d, %d, ", *(*(ar+1)+3), ar[2][2]);
	printf("%d, %d\n", *(*(ar+**ar+2)+3), ar[1+2][2*2]);
	return 0;
}
void display(int m1){
	int n = 20;
	if(m1==n){
		printf("%d\n", m1 >> 2);
	}else{
		printf("%d\n", m1*n);
	}
}
