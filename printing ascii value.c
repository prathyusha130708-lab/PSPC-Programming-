#include <stdio.h>

int main()
{
    char a; 
    printf("Enter character to print its ASCII value:\n");
    scanf(" %c", &a); 
    printf("The ASCII value of '%c' is %d\n", a, a);
    return 0;
}

