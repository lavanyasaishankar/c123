#include<stdio.h>
int main()
{
	int w,i,b;
	printf("enter the values");
	scanf("%d",&w);
	for(i=1;i<=w;i++)
	{
	b=w*i;
	printf("%d*%d=%d\n",w,i,b);
	}
	return 0;
}
