#include <stdio.h>

int main(void) {

    int n, i; float sum;

    printf("Enter input: ");
    scanf("%d", &n);

    for(i=1, sum=0; i<=n; i++) {

        sum = sum + (float)1/i;

    }

    printf("The answer is %f\n", sum);
}