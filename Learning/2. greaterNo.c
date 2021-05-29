// Q. Write a program to check which no is greater.

#include <stdio.h>

int main() {

    int a, b;

    printf("Input number 1: ");
    scanf("%d", &a);

    printf("Input number 2: ");
    scanf("%d", &b);

    if(a==b) {
        printf("Both numbers are equal.");
    }

    else if(a>b) {
        printf("The greater no is A.");
    }

    else {
        printf("The greater no is B.");
    }

}