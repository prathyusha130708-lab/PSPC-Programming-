#include<stdio.h>
int main ()
{
	int x,y;
	printf("Enter any two values to check greatest of the numbers\n");
	scanf("%d%d",&x,&y);
	if (x>y)
	{
		printf("%d is greatest\n",x);
	}
	else
	{
		printf("%d is greatest\n ",y);
	}
	return 0;
}
