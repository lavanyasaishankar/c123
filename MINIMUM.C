#include<stdio.h>
void main()
{
int l[50],i,a,min,n;
printf("enter the range");
scanf("%d",&a);
printf("enter the array values");
for(i=0;i<n;i++)
{
scanf("%d",&l[i]);
}
min=l[0];
for(i=0;i<n;i++)
{
if(l[i]>min)
{
min=l[i];
}
printf("%d",min);
return 0;
}}
