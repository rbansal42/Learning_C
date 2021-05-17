#include <stdio.h>

int main() {

    int i, n=1, base, exponent, sum=0;

    printf("Input a number: ");
    scanf("%d", &base);

    printf("Input a number: ");
    scanf("%d", &exponent);

    i = exponent;       
    while(i>0) {

        n = n * base;
        sum = sum + n;
        i--;
    }

    printf("%d", sum);
}