#include<stdio.h>
int main()
{
	int i,n,rev=0,rem;
	printf("enter n value\n");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d\t",rev);
	return 0;
}
