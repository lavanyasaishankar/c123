#include<stdio.h>
int main()
{
char a[50];
int l[50],i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]>=0&&a[i]<=49)
 {
 printf("%d",a[i]); 
 }
}
return 0;
}
