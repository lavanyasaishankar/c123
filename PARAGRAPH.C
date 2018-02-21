include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char LA[500],i=0,A=0;
gets(LA);
while(LA[i]!=0)
{
if(LA[i]=='.')
{
  A++;
}
  else
  {
}
  i++;
}
printf("%d",A);
}
