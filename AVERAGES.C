#include <stdio.h>

int main()
{
    int l,a[10],i,sum=0;
    int avg;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
  avg=sum/l;
     printf("%d",avg);
  return 0;
}
