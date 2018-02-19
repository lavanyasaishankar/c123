#include<stdio.h>
void main()
{
int b[50],i,a,max;
printf("enter the range");
scanf("%d",&a);
printf("enter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
max=b[0];
for(i=0;i<n;i++)
{
if(b[i]>max)
{
max=b[i];
}
}
printf("%d",max);
}
