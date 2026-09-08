#include<stdio.h>
int main()
{{
	int x,y,z;
	printf("enter three numbers to check greatest of three numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	(((x>y)&&(x>z))? printf("%d is greater", x):((y>x)&&(y>z))? printf("%d is greater",y):printf("%d is greatest",z));
	return 0;
}}
