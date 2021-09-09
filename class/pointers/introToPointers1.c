// Q. Initaite a pointer and assign it the address of a variable. Do it for 2 variables and pointers.

/*
    ##About Pointers

    int *ptr == declaring a pointer to integer
    
    During Program,
            ptr == address stored in the pointer variable
            *ptr == value of the variable whose address is stored in the ptr pointer

*/

#include <stdio.h>

int main()
    {
        int a, b; int *ptr0; int *ptr1;

        printf("Enter a value: ");
        scanf("%d", &a);

        printf("Enter a value: ");
        scanf("%d", &b);

        printf("In address of %d is %d.\n", a, &a);

        ptr0 = &a;
        printf("In address of %d is %d.\n", a, ptr0);

        printf("In address of %d is %d.\n", b, &b);
        ptr1 = &b;
        printf("In address of %d is %d.\n", b, *ptr1);

        return(0); // Exit status of a program
    }