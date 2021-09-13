// Write a program to find maximum b/w 2 numbers using pointers.

#include <stdio.h>

int main() {

    int a, b, *ptr0, *ptr1;

    ptr0 = a;
    ptr1 = b;

    printf("Input number a: ");
    scanf("%d", &ptr0);
 
    printf("Input number b: ");
    scanf("%d", &ptr1);

    if(ptr0 == ptr1) {
        printf("Both values are same.");
    }

    else if (ptr0 < ptr1) {
        printf("The maximum is %d.\n", ptr1);
    }
    
    else {
        printf("The maximum is %d.\n", ptr0);
    }

}