#include <stdio.h>

int main() {

    int n, i, j;

    printf("Input a number: ");
    scanf("%d", &n);

    i = n;

    while(i >= 1) { 
        
        j = i;

        while(j >= 1) {
         
            printf("%d ", j);
            j--;
        }
 
        i--;
        printf("\n");

    }
}