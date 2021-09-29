// Malloc intro

#include <stdio.h>
#include <stdlib.h>

int main() {

    // For a single character

    char c, *ptr;
    ptr = &c;

    // For an Array

    char c[99];

    ptr = ptr + 1; // It will move to the next bit in the address.
                    // ptr + 1 == ptr[1]

    // If ptr + 1 == ptr[1], we can say that,

    // *(ptr + 1) == ptr[1]
    // ptr[n] == *(ptr + n);

}