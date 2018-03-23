#include <stdio.h>
int main()
{
 int original,a;
 scanf("%d",&original);
 a=original;
 while(a%2==0)
 {
 a=a/2;
 printf("%d\n",a);
 }
 printf("%d is the number not div\n",a);
 return 0;
}
