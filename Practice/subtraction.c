#include <stdio.h>

int main(void) {

    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    c = a - b;

    printf("The subtract of %d & %d = %d\n", a, b, c);
}