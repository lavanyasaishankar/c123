#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int count=0;
printf("\n enter an integer");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digits :%d",count);
getch();
}
