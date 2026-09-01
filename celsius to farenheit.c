#include<stdio.h>
int main ()
{
	float c,f;
	printf("enter temperature in celsius\n");
	scanf("%f",&c);
	f=(c*0.5)+32;
	printf("temperature in fahrenheit=%f",f);
	return 0;
}
