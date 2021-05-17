#include <stdio.h>

int main(void) {

    int i, n;
    float factorial, result;

    printf("Input a number: ");
    scanf("%d", &n);

    for(i = 1, factorial = 1; i <=n; i++) {

        factorial = factorial * i;
    }

    result = factorial;

    printf("The result is %f", factorial);

}