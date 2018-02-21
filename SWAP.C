#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,temp;
	scanf("%d\t%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("%d\t%d",a,b);
	return 0;
}
