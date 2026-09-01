#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,n,t,CI;
	printf("enter the value p,r,n,t");
	scanf("%f",&p,&r,&n,&t);
	CI=p*1+pow(r,n)*n*t;
	printf("compound interest=%f",CI);
	return 0;
}
