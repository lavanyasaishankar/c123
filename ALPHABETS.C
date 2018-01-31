#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("\n enter an alphabet");
scanf("%d",&c);
for(c>='a' && c<='z')||(c>='A' && c<='Z')
{
printf("\n %c is an alphabet",c);
}
else
{
printf("\n %c is not an alphabet",c);
}
getch();
}
