#include <stdio.h>

int main(void) {

    int a, b, c;
    
    printf("The Program will find the difference between the 2 given numbers.\n");

    printf("Enter the First number: ");
    scanf("%d", &a);

    printf("Enter the Second Number: ");
    scanf("%d", &b);

    if (a > b) {

        c = a - b;
    }

    else {
        
        c = b - a;

    }
    
    printf("The difference of %d & %d is %d.\n", a, b, c);


}