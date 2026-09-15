#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter the sides of tringle\n");
	scanf("%d%d%d",&a,&b,&c);
	if ((a!=b)&&(b!=c))
	{
		printf("It is a scalene triangle\n");
	}
	else if(((a=b)&&(b=c))&&(a!=c))
	{
		printf("It is a isosceles triangle\n");
	}
	
	else if((a=b)&&(b=c)&&(c=a))
	{
		printf("It is a equilateral triangle\n");
	}
	return 0;
}
