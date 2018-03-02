#include<stdio.h>
#include<conio.h>
void main()
{
int l;
int count=0;
printf("\n enter an integer");
scanf("%d",&l);
while(l!=0)
{
l/=10;
++count;
}
printf("number of digits :%d",count);
getch();
}
