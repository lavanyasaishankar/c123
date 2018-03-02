#include <stdio.h>
int main(void) 
{
	int a,l,temp;
	scanf("%d",&n);
	int a[n];
	for(l=0;l<n;l++)
	{
		scanf("%d",&n[l]);
	}
	for(l=0;l<n;l++)
	{
		if(a[l]>a[l+1])
			{
				temp=a[l];
				a[l]=a[l+1];
				a[l+1]=temp;
			}
			}
	printf("large:%d",a[l]);
	printf("small:%d",a[0]);
	return 0;
}
