#include <stdio.h>

int main() {
    int a[100], i, n, sum = 0;
    
    printf("Enter no of elements:\n");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    
    printf("%d", sum);
    return 0;
}
