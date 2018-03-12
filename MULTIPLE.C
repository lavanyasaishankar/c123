#include <stdio.h>

int main()
{
	int n;
	printf("\n enter the number");
	scanf("%d",&n);
            n=n+(10-n%10);
	printf("%d is the nearest number",n);
return 0;
}
