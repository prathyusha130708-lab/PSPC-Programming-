#include<stdio.h>
int main ()
{
	float c,f;
	printf("enter temperature in fahrenheit\n");
	scanf("%f",&f);
	c=(f-32)*0.5;
	printf("fahrenheit to celsius=%f",c);
	return 0;
}
