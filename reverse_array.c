#include <stdio.h>

int main() {
    int i, a[100], n;
    
    printf("Enter no of element in array\n");
    scanf("%d", &n);
    
    printf("Enter %d element\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("The elements in Reverse order are:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d\t", a[i]);
    }
    
    return 0;
}
