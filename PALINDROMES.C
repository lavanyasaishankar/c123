
#include<stdio.h>
int main()
{
  char strin[20],revers[20];
  int i,j;
  printf("  Enter a string: ");
  scanf("%s",strin);
  for(i=strlen(strin)-1,j=0;i>=0;i--,j++)
      revers[j]=strin[i];
      revers[j]='\0';
  if(strcmp(strin,revers) !=0)
  {
      printf("\nThe given string %s is not a palindrome",strin);
  }
  else
  {
  printf("\nThe given string %s is a palindrome",strin);
  }
  return 0;
}
