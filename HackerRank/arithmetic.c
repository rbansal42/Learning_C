#include <stdio.h>

int main() {

    int a,b;
    float i,j;

    printf("Input your integers: ");
    scanf("%d %d", &a, &b);

    printf("Input your floats: ");
    scanf("%f %f", &i, &j);

    printf("The sum of a & b is %d + %d = %d\n", a, b, a+b);
    printf("The difference of a & b is %d - %d = %d\n", a, b, a-b);

    printf("The sum of i & j is %.2f + %.2f = %.2f\n", i, j, i+j);
    printf("The difference of i & j is %.2f - %.2f = %.2f\n", i, j, i-j);
}