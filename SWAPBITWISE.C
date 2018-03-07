#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d",&i);
	scanf("%d",&j);
	printf("\n before swapping i=%d and j=%d",i,j);
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	printf("\n after swapping i=%d and j=%d",i,j);
	return 0;
}
