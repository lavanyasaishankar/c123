#include <stdio.h>
int main() 
{
	char a[100];
	int l,i,num,count=0;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	    if(a[i]=='0'||a[i]=='1')
	    {   
	        count++;
	    }
	    else
	    {
	       printf("no");
	       break;
	    }
	}
	if(l==count)
	{
	     printf("yes");
	}
	return 0;
}
