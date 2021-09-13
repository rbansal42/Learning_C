// Create a function swap() that takes 2 integers as input and swaps their places.
// The swap should effect in the entire program. (Pointers would be used for this.)

#include <stdio.h>

void swap(int *x, int *y) {

    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("\n\nIn function:\na = %d\nb = %d\n", *x, *y);

    return;
}


int main() {

    int a, b;

    printf("\nInput a: ");
    scanf("%d", &a);

    printf("Input b: ");
    scanf("%d", &b);

    printf("\nValue of a is %d, b is %d", a, b);

    swap(&a, &b);

    printf("\nValue of a is %d, b is %d", a, b);

    return(0);
}
