// Q. Statement : s = 1 + (1+2) + (1+2+3) ...; for n terms

#include <stdio.h>

int main() {

    int n, sum=0, total = 0;

    printf("Input no of terms n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {

        sum = sum + i;
        total = total + sum;
    }

    printf("The sum of the series is: %d", total);

}
