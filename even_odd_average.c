#include <stdio.h>
int main() 
{
    int a[100], i, n, esum = 0, ecount = 0, osum = 0, ocount = 0;
    float evavg, odavg;
    
    printf("Enter no of element in array\n");
    scanf("%d", &n);
    
    printf("Enter %d element\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++) 
    {
        if(a[i] % 2 == 0) 
        {
            esum = esum + a[i];
            ecount++;
        }
    }
    evavg = (float)esum / ecount;
    
    for(i = 0; i < n; i++) 
    {
        if(a[i] % 2 != 0) 
        {
            osum = osum + a[i];
            ocount++;
        }
    }
    odavg = (float)osum / ocount;
    
    printf("even avg = %f\n", evavg);
    printf("odd avg = %f\n", odavg);
    
    return 0;
}
