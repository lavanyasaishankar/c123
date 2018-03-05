#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\n enter the first numbers");
	scanf("%d",&a);
	printf("\n enter the second number");
	scanf("%d",&b);
	printf("\n enter the third number");
	scanf("%d",&c);
	a=a%10;
	b=b%10;
	c=c%10;
	d=a+b+c;
	printf("%d",d);
	return 0;
}
