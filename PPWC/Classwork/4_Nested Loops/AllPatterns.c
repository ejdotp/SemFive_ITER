//pattern printing:
#include <stdio.h> 
 
void main()  
{  
    int n;  
    printf("Enter the number of rows: ");  
    scanf("%d", &n);  
    
    printf("\n'*' wala Right angled triangle:-\n"); 
    for(int i=1; i<=n; i++)  
    {  
        for(int j=1; j<=i; j++)    
            printf("* ");  
        printf("\n");  
    }  
    
    printf("\nNumber wala Right angled triangle:-\n"); 
    for(int i=1; i<=n; i++)  
    {  
        for(int j=1; j<=i; j++)    
            printf("%d ", j);  
        printf("\n");  
    }  
    
    printf("\nInverted '*' wala Right angled triangle:-\n"); 
    int m = n;  
    for(int i=1;i<=n;i++)  
    {  
       for(int j=1;j<i;j++)  
           printf("  ");   
       for(int k=1;k<=m;k++)   
           printf("* ");    
       m--;  
       printf("\n");  
    }  
    
    printf("\nInverted number wala Right angled triangle:-\n"); 
    m = n;  
    for(int i=1;i<=n;i++)  
    {   
       for(int k=1; k<=m; k++)   
           printf("%d ", k);    
       m--;  
       printf("\n");  
    }
    
    printf("\nFloyd's Triangle:-\n");
    int count = 1;
    for(int i=1; i<=n; i++)  
    {  
        for(int j=1; j<=i; j++)   
            printf("%d ", count++);  
        printf("\n");  
    }  
    
    printf("\nPyramid:-\n");   
    for(int i=1; i<=n; i++)  
    {  
        for(int j=1; j<=n-i; j++)   
            printf("  "); 
        for(int k=1; k<=2*i-1; k++)   
            printf("* "); 
        printf("\n");  
    } 
    
    printf("\nDiamond:-\n");   
    for(int i=1; i<=n; i++)  
    {  
        for(int j=1; j<=n-i; j++)   
            printf("  "); 
        for(int k=1; k<=2*i-1; k++)   
            printf("* "); 
        printf("\n");  
    } 
    for(int i=n-1; i>=1; i--)  
    {  
       for(int j=1; j<=n-i; j++)  
           printf("  ");   
       for(int k=1; k<=2*i-1; k++)   
           printf("* ");     
       printf("\n");  
    }  
}  
