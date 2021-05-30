// Q Statement: s = 1 + x + (x^2)2! + (x^3)3! ..., for n terms

#include <stdio.h>

int main() {

    float total = 0, s, pow;
    float x, n, fac=1;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Input the no of terms n: ");
    scanf("%f", &n);

    pow = x;

    for(float i=1; i<=n; i++) {

        s = pow/fac;
        total = total + s;

        pow = pow * x;
        fac = fac * i;
    }

    if(n==0) {
        
    printf("%f", x);

    }

    else {
    
    printf("%f", total+1);
    
    }
}