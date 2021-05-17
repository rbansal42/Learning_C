#include <stdio.h>

int main(void) {

    int n,c,i;

    printf("Input a value: ");
    scanf("%d", &n);

    for (i=1,c=1; i<=n; i++) {

        c = c*i;
    }
    printf("%d", c);
}