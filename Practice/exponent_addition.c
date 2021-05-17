#include <stdio.h>

int main(void) {

    int exponent, c, d;
    int base, i;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if(exponent==0) {
        d = 1;
        printf("%d", d);
        return(0);
    }

    else if(exponent==1) {
        d = 1 + base;
        printf("%d", d);
        return(0);
    }

    else {
        
        i = 2;
        d = 0;
        c = base;
        while(i<=exponent) {
            c = c*base;
            d = d+c;
            i++;
        }
    }

    printf("%d", d+1+base);
}