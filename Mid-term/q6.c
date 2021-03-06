// Q Statement: S = x - (x^2)/2! + (x^3)/3! - (x^4)/4! ... for n terms

#include <stdio.h>

int main() {

    float x, n;
    float s, c, total=0, fac=1;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Input the no of terms n: ");
    scanf("%f", &n);

    total = 0; c = x;

    for(int i=1; i<=n; i++) {

        // Factorial Determination
        fac = fac * i;

        // Finding Value for nth term

        s = c/(fac);        
        total = total + s;

        c = c * -x;      // x will start off as x^1, but as the loop iterates, it will power up with each iteration as needed for the program

    }

    printf("The sum is: %f", total);


}