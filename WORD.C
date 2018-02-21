#include <stdio.h>
#include <string.h>
 
void main()
{
    char a[200];
    int c=0,i;
    scanf("%[^\n]a",a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
            c++;    
    }
    printf("%d\n", c + 1);
}
