#include<stdio.h>
int  main()
{
int a,b,c;
printf("enter the three values");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&c)
{
	printf("a is greater");
}
else if(b>c&&a)
{
	printf("b is greater");
}
else if(c>a&&b)
{
	printf("c is greater");
}
else
{
	printf("0");
}
	return 0;
}
