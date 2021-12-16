#include <stdio.h>

int main() {

    unsigned int a = 5, b = 9;

    printf("\n a = %d, b = %d", a, b);
    printf("\n Bitwise AND of a, b = %d", a&b);
    printf("\n Bitwise OR of a, b = %d", a|b);
    printf("\n Bitwise XOR of a, b = %d", a^b);
    printf("\n Bitwise NOT of a, b = %d", ~a);
    printf("\n Left shift of b is %d", b<<1);
    printf("\n Right shift of b is %d", b>>1);
    
}