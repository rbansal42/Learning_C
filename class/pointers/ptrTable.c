// Q: Output a multiplication table using pointers

#include <stdio.h>

int main() {

    int n, product, *ptr;
    ptr = &product;

    printf("This program will print a multiplication table from 0 to 10 for any number.\n");

    printf("Input a number: ");
    scanf("%d", &n);

    printf("\n");
    for(int i=0; i<=10; i++) {

        *ptr = n * i;

        printf("%d * %d = %d\n", n, i, *ptr);
    }

}