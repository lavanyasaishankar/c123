#include<stdio.h>
void main()
{
int f1=0,f2=1,f3,n,a;
printf("\n enter the number");
scanf("%d",&n);
printf("\n %d\t%d",f1,f2);
for(a=2;a<n;a++)
{
f3=f1+f2;
f1=f2;
f2=f1;
printf("\t%d",f3);
}
}
