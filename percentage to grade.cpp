#include <stdio.h>
int main() 
{
    int a;

    printf("Enter the percentage of student: ");
    scanf("%d", &a);

    if (a > 85) 
        printf("%d grade is A\n", a);
    else if (a < 85 && a >= 75) 
        printf("%d grade is B grade\n", a);
    else if (a < 75 && a >= 65) 
        printf("%d is C grade\n", a);
    else if (a < 65 && a >= 55) 
        printf("%d is D grade\n", a);
    else if (a < 55 && a >= 45) 
        printf("%d is E grade\n", a);
    else 
        printf("%d is fail\n", a);

    return 0;
}
