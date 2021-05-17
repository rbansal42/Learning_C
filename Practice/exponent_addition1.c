#include <stdio.h>

int main(void) {

    int x, n, i, c, d, j;

    printf("Input base: ");
    scanf("%d", &x);

    printf("Input exponent: ");
    scanf("%d", &n);

    for(d=1, j=1; j<=n; j++ ) {
     
        for(c = 1, i = 2; i<=j; i++) {

            c = c * x;
            d = d + c;
        }
    }

    printf("%d \n", d);

}