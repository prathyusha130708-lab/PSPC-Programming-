#include<stdio.h>
int main()
{
	int i,a[100],n, sum=0;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("%d\t",sum);
	return 0;
}
