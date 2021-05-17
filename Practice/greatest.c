#include <stdio.h>

int main(void) {

    int a, b , c;

    // Taking input from user for the 3 numbers...

    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    printf("Enter the value for c: ");
    scanf("%d", &c);
    

    // Running calculation..

    if(a > b) {
        
        if(a > c) {

            printf("a is the greater of 3 numbers.\n");
        }

        else {

            printf("c is the greater number of the 3.\n");
        }
    }

    else {

        if (b > c) 
        {
            printf("b is the greater number of the 3.\n");
        }

        else {
            printf("c is the greater number of 3.\n");
        }

    }
}