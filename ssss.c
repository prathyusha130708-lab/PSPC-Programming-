#include<stdio.h>
int main()
{
	int i,n,j,k;
	printf("Enter number of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  for(j=n-1;j>=0;j--)  	
       printf(" ");
    for(k=1;k<=i;k++)
	printf(" * ");
	
	printf("\n"); 
    return 0;
}
