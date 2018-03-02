#include <stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[20];
	int m,n;
	gets(s1);
	gets(s2);
	m=strlen(s1);
	for(n=0;s2[n]!='\0';m++,n++)
	{
		s1[m]=s2[n];	
	}
	s1[m]='\0';
	puts(s1);
	return 0;
}
