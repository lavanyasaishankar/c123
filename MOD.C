#include<stdio.h>
int main(){
int a,L,c,d;
scanf("%d %d %d",&a,&L,&c);
d=(a*L)%c;
printf("%d",d);
return 0;
}
