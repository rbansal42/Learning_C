#include <stdio.h>

int main() {

    int a,b,c;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter a number: ");
    scanf("%d", &b);

    c = a + b;

    if(c%2==0) {

        printf("Even!");
    }

    else {

        printf("Odd!");
    }

}