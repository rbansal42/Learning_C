// Write a program to store 'n' elements in an array & print the elements using pointer.

#include <stdio.h>

int main() {

    int len;

    printf("Input the length of the array: ");
    scanf("%d", &len);

    int arr[len];


    for(int i=0; i < len; i++) {

        printf("Input element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // Declaring a pointer at assigining it the value of the address of arr.
    int *ptr = &arr;
    
    // Printing the entered elements using pointer
    printf("The elements are: ");

    for(int i=0; i < len; i++) {

        printf("%d\t", *ptr);

        ptr++;
    }

}