#include <stdio.h>

int main(void)
{
	int i,n;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=3;i<=n/3;i++)
{
	if(n%i==0)
{
	break;
}}
if(i>n/3)
{
	printf("\n%d the number is prime",n);
}
else
{
	printf("\n %d the number is not prime",n);
}
	return 0;
}
