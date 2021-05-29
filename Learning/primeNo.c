// Q. Determine whether a given no is prime or not
//
//  A No is prime if: It is only divisible by itself, and 1 
//

#include <stdio.h>

int main() {

    int n;

    printf("Input the no to check: ");
    scanf("%d", &n);                // %d = Integer, %f = Float, %c = character, %s = string
    
    for(int i = 2; i<n; i = i + 1) {

        if(n % i == 0) {

            printf("The given no is not prime.");
            return 0;
        }

    }

    printf("The given no is prime.");

}