// Q statement: S = 1 + x*(1/4) + x * (2/8) + ..n terms

#include <stdio.h>

int main() {

    float n, x; 
    float total=1, s;

    printf("Input the value for x: ");
    scanf("%f", &x);

    printf("Input the no of terms n: ");
    scanf("%f", &n);
    
    for(float i=1; i<=n; i++) {

        s = x * ((i)/(4*(i)));
        total = total + s;

    }

    printf("%f", total);
}
