#include <stdio.h>

int main(void) {
                                // n = 3; 1/1 + 0.5 + 0.1666 = 1.888
    float i,n,c,a,b;

    printf("Enter a value: ");
    scanf("%f", &n);

    for(c=0, i = 1; i<=n; i++) {

        for(a=1,b=1; a<=i; a++) {
         
            b = b*a;
        }

        c = c + (1/b);
    }
    printf("%f", c);
    return(0);
}