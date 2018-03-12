#include <stdio.h>

int main()
{
	int a,b,c;
	printf("\n enter the first numbers");
	scanf("%d",&a);
	printf("\n enter the second number");
	scanf("%d",&b);
	c=a-b;
	if(c%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
