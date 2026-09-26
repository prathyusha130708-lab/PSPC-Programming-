#include <stdio.h>

int main() 
{
    int i, n;
    
    printf("Enter n value\n");
    scanf("%d", &n);
    
    i = 1;
    while (i <= n) 
    {
        printf("%d\t", i);
        i++; 
    }
    
    return 0;
}
