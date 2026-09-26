#include <stdio.h>

int main() 
{
    int i, n, F, S, Th;
    
    printf("Enter n value\n");
    scanf("%d", &n);
    F = 0;
    S = 1;
    
    printf("%d\t%d\t", F, S);
    for (i = 1; i <= n; i++) 
    {
        Th = F + S;        
        F = S;              
        S = Th;            
        
        printf("%d\t", Th); 
    }
    
    return 0;
}
