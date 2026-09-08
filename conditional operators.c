#include<stdio.h>
int main()
{
	int x,y;
	printf("enter two numbers to perform conditional operators\n");
	scanf("%d%d",&x,&y);
	(x>y)?printf("%d is greatest",x):printf("%d is greater",y);
	return 0;
}
