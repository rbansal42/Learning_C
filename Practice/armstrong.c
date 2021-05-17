#include <stdio.h>

int main() {

    int i, n, s=0, j, k;

    printf("Enter a number below 10,000: ");
    scanf("%d", &n);

    if(n > 10000) {
        printf("Please enter a number below 10,000: ");
        return(0);
    }

    for(i=1; i<=n; i++) {   

        s = 0;
        k = i;

        while(k != 0) {

            j = k % 10;
            s = s + (j*j*j);
            k = k/10;
        
        }
    
        if(s == i) {
            printf("%d\t", s);
        }

    }

}