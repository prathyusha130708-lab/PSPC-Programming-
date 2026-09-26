#include<stdio.h>
int main()
{
	int i,n,sum=1;
	printf("Enter n value\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum*i;
		i++;
	}
	printf("%d\t",sum);
	return 0;
}
