// https://www.hackerrank.com/challenges/reverse-array-c/problem

#include <stdio.h>

int input() {

    int n;

    scanf("%d", &n);

    if(n > 1000 || n < 1) {
        printf("Invalid input. Please enter a number between 1 and 1000.\n");
        printf("Input the size of array: "); 
        input();
    }
    else {
        return n;
    }

}

void revArray(int arr[], int n) {

    int rev[n];

    for(int i=0, j=n-1; i<n; i++, j--) {

        rev[i] = arr[j];
        
    }

    printf("\nOutput array: \n");
    
    for(int i = 0; i < n; i++) {

        printf("%d, ", rev[i]);
        
    }


}  

int main() {

    printf("Input the size of array: ");
    int n = input();

    int arr[n];
    int rev[n];

    // Creating array of size n
    for(int i = 0; i < n; i++) {

        printf("Enter value at index %d: ", i);
        scanf("%d", &arr[i]);
        // printf("\n");
    }

    printf("Input array: \n");
    
    for(int i = 0; i < n; i++) {

        printf("%d, ", arr[i]);
        
    }

    revArray(arr, n);

    // printf("\n");
    
    // for(int i = 0; i < n; i++) {

    //     printf("%d, ", arr[i]);
        
    // }

    printf("\n");


}