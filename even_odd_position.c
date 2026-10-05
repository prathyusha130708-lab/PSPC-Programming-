#include <stdio.h>
int main() 
{
    int i, a[100], n;
    
    printf("Enter no of element in array\n");
    scanf("%d", &n);
    
    printf("Enter %d element\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    printf("Even position elements are:\n");
    for(i = 0; i < n; i = i + 2) 
    {
        printf("%d\t", a[i]);
    }
    
    printf("\nOdd position elements are:\n");
    for(i = 1; i < n; i = i + 2) 
    {
        printf("%d\t", a[i]);
    }
    
    return 0;
}
