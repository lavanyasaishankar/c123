#include<stdio.h>
int main()
{
	 int l,m[5],i,count=0;
	 printf("get the numbers\n");
	 for(i=0;i<5;i++)
	 {
	 scanf("%d",&m[i]);
	}
	printf("enter the number to verify\n");
	scanf("%d ",&l);
	for(i=0;i<5;i++)
		{
		if(l==m[i])
		{
	count++;
		}
	}
	printf("%d",count);
	return 0;
}
