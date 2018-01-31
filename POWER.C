#include<stdio.h>
#include<stdio.h>
void main()
{
int m,n,o;
printf("enter the base value");
scanf("%d",&m);
printf("enter the exponent value");
scanf("%d",&n);
while(n!=0)
{
o*=m;
--n;
}
printf("\n answer=%d",o);
getch();
}
