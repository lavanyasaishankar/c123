#include<stdio.h>
int main()
{
	int m,n;
	long long o=1;
	printf("\n enter the base number");
	scanf("%d",&m);
	printf("\n enter the power number");
	scanf("%d",&n);
	while(n!=0)
	{
		o*=m;
		--n;
	}
	printf("\n the answer is %d",o);
    return 0;
}
