#include <stdio.h>
int main() 
{	
  int a,l,i;
  char c;
   for(i=0;i<4;i++)
 {
       scanf("%d %c %d",&a,&c,&l);
       if(i%2==0)
    {
           printf("%d\n",(a/l));
    }
       else
    {
           printf("%d\n",(a%l));
    }
 }
	return 0;
}
