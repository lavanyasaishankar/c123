#include<stdio.h>
int main()
{
int l,as=0;
printf("enter the number:");
scanf("%d",&l);
while(l!=0)
{
as=as*10;
as=as+l%10;
l=l/10;
}
printf("the reverse of the number",as);
return 0;
}
