
#include <stdio.h>

void main() {

    int n;

    printf("Input end limit: ");
    scanf("%d", &n);

    for(int j = 2; j<n; j++) {

        for(int i=2; i<j; i++) {

            if(j%i==0) {
                
                break;
            }

            printf("%d == Prime\n", j);

        }
    }

    // printf("Number is prime.");

}