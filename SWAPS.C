#include<stdio.h>
int main()
{
	int t,a,b;
	printf("\n enter the first swap number");
	scanf("%d",&a);
	printf("\n enter the second swap number");
	scanf("%d",&b);
	{
		t=a;
		a=b;
		b=t;
	}
	printf("\n after swapping of a:%d",a);
	printf("\n after swapping of b:%d",b);
	return 0;
}
