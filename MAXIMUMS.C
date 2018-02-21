#include <stdio.h>
  int main() 
  {
    int l[10];
    int i;
    int greatest;
    for (i = 0; i < 10; i++) 
    {
    	scanf("%d", &l[i]);
    }
    greatest = l[0];
    for (i = 0; i < 10; i++) 
    {
	if (l[i] > greatest) 
	{
	greatest = l[i];
    }
    }
    printf("%d", greatest);
    return 0;
  }
