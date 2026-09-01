#include<stdio.h>
int main ()
{
	int n,y,w,d;
	printf("enter total number of days\n");
	scanf("%d",&n);
	y=n/365;
	w=(n % 365) / 7;
	d=(n % 365) % 7;
	printf("%d years %d weeks %d days\n",y,w,d);
	return 0;
}
