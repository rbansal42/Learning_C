#include <stdio.h>

int main() {

    int n, i, s = 0, d = 0;
    
    printf("Input a number: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++) {

        s = s * 10 + 2;
        d = d + s;
    }

    printf("%d \n", d);

}