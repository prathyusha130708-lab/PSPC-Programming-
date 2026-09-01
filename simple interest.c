#include<stdio.h>
int main ()
{
	float p,r,t,si;
	printf("Enter p,r,t\n");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*r*t)/100;
	printf("simple interest = %f",si);
	return 0;
}
