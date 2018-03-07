#include <stdio.h>

int main()
{
	int l,m,n;
	printf("\n enter the number one");
	scanf("%d",&m);
	printf("\n enter the number two");
	scanf("%d",&n);
	l=m*n;
	printf("%d",l);
	if(l%2==0)
  {
	printf("\n even");
	}
	else
	{
	printf("\n odd");
	}
	return 0;
}
