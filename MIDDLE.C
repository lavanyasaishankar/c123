#include <stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int n,i,m;
	scanf("%s",a);
	n=strlen(a);
	m=n/2;
	if(n%2==0)
	{
		a[m]='*';
		a[(m)-1]='*';
	}
	else
	{
		a[m]='*';
	}
	printf("\n%s",a);
	return 0;
}
