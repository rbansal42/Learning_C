/*
# Dynamic Memory Allocation

Malloc = Memory Allocation
By defaualt, Malloc does not return a value. It is a void function
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;      // Only for incrementation
    int *ch, *t;

    ch = (int *) malloc(10 * sizeof(int));

    for(t = ch, i = 0; i < 10; t++, i++) {

        printf("Input Value %d: ", i+1);
        scanf("%d", t);

    }

    for(t = ch, i = 0; i < 10; t++, i++) {

        printf("\nValue %d = %d", i+1, *t);
    
    }

    printf("\n");
    
    return(0);

}