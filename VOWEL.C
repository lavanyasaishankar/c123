#include<stdio.h>
int main() {
    char L[15];
    scanf("%s",&L);
    int A,count=0;
    for(A=0;A<15;A++)
    {if(L[A]=='a'||L[A]=='e'||L[A]=='i'||L[A]=='o'||L[A]=='u'||L[A]=='A'||L[A]=='E'||L[A]=='I'||L[A]=='O'||L[A]=='U')
    {
    count++;
     }
    }
     if(count!=0)
     printf("Yes");
     else
     printf("No");
     return 0;
}
