#include<stdio.h>
int main()
{
	int i,n,j,a=65;
	printf("Enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=i;j++)
    {  	
       printf("%c\t",a);
       a++;
    }
    printf("\n");
    }  
    return 0;
}
