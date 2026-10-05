#include<stdio.h>
int main()
{
	int i,n,j,a;
	printf("Enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=i;j++)
    {  	
       printf("%d\t",a);
       a++;
    }
    printf("\n");
    }  
    return 0;
}
