#include <stdio.h>

int main() {

    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n], b[n];

    for(i = 0; i < n; i++) {

        printf("Input number %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i = n-1, j = 0; j < n; j++, i--) {

        b[j] = a[i];
    }

    for(i = 0; i < n; i++) {

        printf("%d ", b[i]);
    }
}