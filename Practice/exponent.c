#include <stdio.h>

int main(void) {

    int x, n, i, c;

    printf("Input base: ");
    scanf("%d", &x);

    printf("Input exponent: ");
    scanf("%d", &n);

    for(c = 1, i = 1; i<=n; i++) {

        c = c * x;

    }

    printf("%d ", c);

}