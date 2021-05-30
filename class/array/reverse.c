// Write a program to print the reverse of a string

#include <stdio.h>

int main() {

    // Declaring an integer size to pass the size of the array

    int size;

    // Asking user for the size of the array

    printf("Input the maximum size of the array: ");
    scanf("%d", &size);

    // Declaring 2 arrays with size as input by user

    char a[size], b[size];

    // Taking a string input from the user

    printf("Enter your string: ");
    scanf("%s", a);

    // Printing the inputted string to validate

    printf("The String you entered: ");
    printf("%s", a);

    // Finding length of the string

    int len;

    for(len=0; a[len] != '\0'; len++);

    printf("\nThe length of the string is: %d", len);

    len--;      // We do this because at the last index, null value will be stored

    // Storing and printing the string in reverse in array b
    
    for(int i=0, j=len; len>=0; i++, j--, len--) {

        b[i] = a[j];
    }    

    printf("\nThe reverse of the string is: %s", b);


}