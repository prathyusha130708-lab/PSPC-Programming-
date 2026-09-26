#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter n value\n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		c++;
		}
	}
	if(c==2)
	printf("it is a prime number\n");
	else
	printf("Not a prime number\n");
	return 0;
}
