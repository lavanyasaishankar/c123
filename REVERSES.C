#include<stdio.h>
int main()
{
int i,s,l,count=0;
char a[100],b[100];
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
s=0;
for(i=count-1;i>=0;i--)
{
b[s]=a[i];
s++;
}
for(i=0;i<count;i++)
{
printf("%c",b[i]);
}
return 0;
}
