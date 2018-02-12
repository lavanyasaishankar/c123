include<stdio.h>
int main()
{
int num,n1,rev=0,rem,n;
   printf("enter an integer");
   scanf("%d",&num);
   n1 = num;
	while (n > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
}
if(n1==rev)
{
	printf("%d is a not palindrome",num);
}
else
{
	printf("%d is palindrome",num);
}
return 0;
}
