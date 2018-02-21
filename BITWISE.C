#include <stdio.h>
void main() {
    int l = 65;
    int a = 120;
    printf(" value of i=%d k=%d before swapping", l, a);

    l=l^a;
    a=l^a;
    l=l^a;
    printf("value of l=%d a=%d after swapping", l, a);

    
}
