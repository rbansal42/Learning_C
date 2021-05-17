#include <stdio.h>

int main() {

    int n, sum=0, factorial=1;

    scanf("%d", &n);

    while(n>0) {

        factorial = factorial * n;
        sum = sum + factorial;
        n--;
    }

    printf("%d", sum);
}