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
	if(i%2==0)
	printf(" odd position = %d\t",a[i]);
	for(i=0;i<n;i++)
	if(i%2!=0)
	printf("even position = %d\t",a[i]);
	return 0;
}
