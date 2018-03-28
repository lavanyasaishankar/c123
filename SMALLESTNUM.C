#include <stdio.h>
int main() 
{
	int n,l,i,a[10],temp;
	scanf("%d %d",&n,&l);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("%d",a[l-1]);
	return 0;
}
