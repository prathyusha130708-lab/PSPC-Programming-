#include<stdio.h>
int main()
{
	int a;
	printf("Enter days to check it is a leap year or not\n");
	scanf("%d",&a);
	if (a%4==0)
	{
		printf("It is a leap year\n");
	}
	else
	{
		printf("It is not a leap year\n");
	}
    return 0;
}
