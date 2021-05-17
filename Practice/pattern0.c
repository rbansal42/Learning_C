#include <stdio.h>

int main() {

    int n, i, j;

    printf("Input a number: ");
    scanf("%d", &n);

    i = 1;

    while(i <= n) { 
        
        j = 1;

        while(j <= i) {
         
            printf("%d ", j);
            j++;
        }
 
        i++;
        printf("\n");

    }
}