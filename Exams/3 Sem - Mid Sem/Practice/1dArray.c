// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem

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

int sumArray(int arr[], int n) {

    int sum = 0;

    for(int i=0; i < n; i++) {

        sum += arr[i];
    }

    return sum;

}


int main() {

    printf("This program will return the sum of array.\n");

    printf("Input the size of array: ");
    int n = input();
    int arr[n];

    // Creating array of size n
    for(int i = 0; i < n; i++) {

        printf("Enter value at index %d: ", i);
        arr[i] = input();

    }

    int sum = sumArray(arr, n);

    printf("The sum of the elements of the array is: %d\n", sum);

}