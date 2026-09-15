#include<stdio.h>
int main ()
{
	int a;
	printf("Enter a age of person\n");
	scanf("%d",&a);
	if (a>=18)
	{
		printf("%d is eligible to vote\n",a);
	}
	return 0;
}
