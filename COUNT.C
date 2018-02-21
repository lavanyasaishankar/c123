#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int l,count=0,i,c;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
     {
        if(a[i]==' ')
        count++;
        
    }
   
    c=l-count;
    printf("%d",c);
    
    
}
