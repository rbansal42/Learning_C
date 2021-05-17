#include <stdio.h>

int main(void) {

    int a,b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    int c = a + b;

    printf("Sum of %d & %d = %d\n",a,b,c);

}