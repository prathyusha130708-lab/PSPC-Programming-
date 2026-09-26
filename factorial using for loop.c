#include<stdio.h>
int main()
{
	int i,n,sum=1;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("%d\t",sum);
	return 0;
}
