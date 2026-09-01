#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c,s,A;
	printf("give a,b,c values");
	scanf("%f%f%f%f",&a,&b,&c,&s);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle=%f",A);
	return 0;
}
