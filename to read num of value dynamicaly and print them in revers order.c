#include<stdio.h>
int main()
{
	int i,a[100],n;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The elements in reverse order are ;\n");
	for(i=n-1;i>=0;i--)
	printf("%d\t",a[i]);
	return 0;
}
