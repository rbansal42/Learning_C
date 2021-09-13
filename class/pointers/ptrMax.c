// Write a program to find maximum b/w 2 numbers using pointers.

#include <stdio.h>

int main() {

    int a,b, max, *ptr;
    
    *ptr = max;

    printf("Input number a: ");
    scanf("%d", &a);

    printf("Input number b: ");
    scanf("%d", &b);

    if(a == b) {

        printf("The numbers are same.");
        return 0;
    }

    else if (a < b)
    {
        ptr = b;
    }
    else
    {
        ptr = a;
    }

    printf("The max of the 2 numbers is %d", ptr);
}