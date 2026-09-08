#include<stdio.h>
int main ()
{
	int a,b,add,sub,mul,mod;
	float div;
	printf ("Enter two values to perform arthematic operations\n");
	scanf("%d%d",&a,&b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	mod = a%b;
	div = (float)(a/b);
	printf("Addition=%d\n Subtraction=%d\n Multiplication=%d\n Modulus=%d\n",add,sub,mul,mod);
	printf ("Division=%f\n",div);
	return 0;
}
