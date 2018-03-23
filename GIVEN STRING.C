#include<stdio.h>
#include<string.h>
int main()
{
int n,l,a,i;
char a[100];
gets(a);
scanf("%d",&n);
l=strlen(a);
a=l-n;
for(i=a;i<l;i++)
{
  printf("%c",a[i]);
}
return 0;	
}
