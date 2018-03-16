#include <stdio.h>

int main()
{
	int n,o;
	printf("\n enter the first number");
	scanf("%d",&n);
	o=n*n;
	printf("%d",o);
	if(o%n==0)
	{
	printf("yes");
	}
	return 0;
}


