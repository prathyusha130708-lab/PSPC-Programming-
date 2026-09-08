#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers to perform assignment operation\n");
	scanf("%d%d",&a,&b);
	printf("%d += %d\n",a,b,a+=b);
	printf("%d -= %d\n",a,b,a-=b);
	printf("%d *= %d\n",a,b,a*=b);
	printf("%d /= %d\n",a,b,a/=b);
	printf("%d %%= %d\n",a,b,a%=b);
	return 0;
	
}
