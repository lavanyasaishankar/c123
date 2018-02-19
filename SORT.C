#include<stdio.h>
int main()
{
int A,B,sum=0,L,i;
scanf("%d",&A);
L=A;
for(i=0;A>0;i++)
{
B=A%10;
sum=(sum*10)+B;
A=A/10;
}
printf("%d",sum);
return 0;
}
