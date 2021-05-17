#include <stdio.h>

int main(void) {

    int n,i,c,x, a,d;

    printf("Input the value of base: ");
    scanf("%d", &x);

    printf("Input the value of exponent: ");
    scanf("%d", &n);

    for(i=0, c=0; i<=x; i++) {

        for(a=1, d=0; a<=i; a++) {

            d = d + x*x;
        }

    }
    printf("%d", d);

} 

