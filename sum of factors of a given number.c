#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+1;
		}
	}
	printf("%d",sum);
	return 0;
}
