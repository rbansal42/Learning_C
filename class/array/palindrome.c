// Write a Program to determine if a string is palindrome

#include <stdio.h>

int main() {

    // Declaring an integer size to pass the size of the array

    int size = 100;

    // Declaring 2 arrays with size as input by user

    char a[size], a_reverse[size];

    // Taking a string input from the user

    printf("Enter your string to check for palindrome: ");
    scanf("%s", a);

    // Printing the inputted string to validate

    printf("The String you entered: %s", a);

    // Finding length of the string

    int len;

    for(len=0; a[len] != '\0'; len++);

    printf("\nThe length of the string is: %d", len);

    len--;      // --> We do this because at the last index, null value will be stored

    // Storing and printing the reverse of the string

    for(int i=0, j=len; len>=0; i++, j--, len--) {

        a_reverse[i] = a[j];
    }    

    printf("\nThe reverse of the string is: %s", a_reverse);

    // Validating for palindrome

    for(int i=0; i<=len; i++) {

        if (a[i] != a_reverse[i])
        {
            printf("\nThe given string is not a palindrome.");
            return 0;
        }
        
    }

    printf("\nThe given string is a palindrome.");
    

}