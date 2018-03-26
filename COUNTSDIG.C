#iclude<stdio.h>
int main()
{
 int a,digit;
 printf("enter the number:");
 scanf("%d",&a);
 while(a!=0)
{
 a=a/10;
 digit=a%10;
 count++;
 }
 printf("the count of digit is %d",count);
 }
 return 0;
 }
