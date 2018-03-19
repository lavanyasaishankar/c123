#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,m,n,o;
	printf("\n enter the no of ninja in kabalis team");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n enter the no of ninja in opponent team");
	scanf("%d %d %d",&d,&e,&f);
            m=a-d;
            n=b-e;
            o=c-f;
            printf("%d %d %d",m,n,o);
            return 0;
}
