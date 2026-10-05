#include <stdio.h>
int main() 
{
    int i, n, a[100], se;
    
    printf("Enter no of element in array\n");
    scanf("%d", &n);
    
    printf("Enter %d element\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter element to search\n");
    scanf("%d", &se);
    
    for(i = 0; i < n; i++) 
    {
        if(a[i] == se) 
        {
            printf("Element found at %d position\n", i + 1);
            return 0;
        }
    }
    
    printf("Element not found\n");
    return 0;
}
