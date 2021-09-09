// Q. Initaite a pointer and assign it the address of a variable. Change the value of the variable using pointer.
        
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
        int a = 5;
        int *ptr;

        ptr = &a;

        printf("\nValue of a = %d\n", a);
        *ptr = 15;

        printf("Value of a = %d\n", a);

        return(0); // Exit status of a program
    }