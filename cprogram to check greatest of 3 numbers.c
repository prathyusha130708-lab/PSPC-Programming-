#include<stdio.h>
int main ()
{
	int x,y,z;
	printf("Enter any three values to check greatest of the numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	if ((x>y)&(x>z))
	{
		printf("%d is greatest\n",x);
	}
	else if ((y>x)&(y>z))
	{
		printf("%d is greatest\n ",y);
	}
	else if ((z>x)&(z>y))
	{
		printf("%d is greatest\n",z);
	}
	return 0;
}
