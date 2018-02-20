#include<stdio.h>
#include<conio.h>
void main()
{
char la[100];
int i;
clrscr();
printf("Enter string:");
for(i=0;i<100;i++)
{
scanf("%c",&la[i]);
if(la[i]=='k')
{
break;
}
}
for(i=0;la[i]!='\0';i++)
{
printf("%c",la[i]);
}
getch();
}
