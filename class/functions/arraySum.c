#include <stdio.h>

int main() {

    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    
    printf("Input %d numbers\n", n);

    for(int i=0; i<n; i++) {
        
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);
    }



}