// Q. Initaite a pointer and assign it the address of a variable.

#include <stdio.h>

int main()
    {
        int a = 5; int *ptr;

        printf("Enter a value: ");
        scanf("%d", &a);

        printf("In address of %d is %d.\n", a, &a);

        ptr = &a;
        printf("In address of %d is %d.", a, ptr);

        return(0); // Exit status of a program
    }