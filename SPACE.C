include <stdio.h>

int main(void)
{
	char la[100];
	int i,k,count=0;
	scanf("%[^\n]s",la);
	for(k=0;la[k]!='\0';++k)
	{
	}
	for(i=0;i<k;i++)
	{
	if(la[i]==' ')
	{
		count++;
	}
	}
	printf("%d",count);
	return 0;
}
