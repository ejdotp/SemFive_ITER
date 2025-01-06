//insertion:
#include <stdio.h>

int main()  
{  
    int n, p, element;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    printf("Enter position for insertion (0 to %d): ", n);
    scanf("%d", &p);    
	arr[n+1];
    for(int i = n - 1; i >= p; i--)
        arr[i + 1] = arr[i];

    printf("Enter element to be inserted: ");
    scanf("%d", &element);
    arr[p] = element;
    n++; 

    printf("Updated Array: { ");
    for(int i = 0; i < n; i++) 
        printf("%d%s", arr[i], (i < n - 1) ? ", " : " ");
    printf("}\n");

    return 0;
}

