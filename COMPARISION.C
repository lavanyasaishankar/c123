#include<stdio.h>
#include<string.h>
int main() {
   char s1[30], s2[30];
   int a,n1;
   scanf("%s",s1);
   scanf("%s",s2);
   a=strlen(s1);
   n1=strlen(s2);
   if (a > n1)
      printf("%s",s1);
   else if (a < n1)
           printf("%s",s2);
   else
      printf("both are equal");
 
   return (0);
}
