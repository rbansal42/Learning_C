// Q. Write a Program to check if a string is palindrome or not

#include <stdio.h>

int main() {

    int size=100;
    char str[size];

    printf("Input string to check: ");
    scanf("%s", str);


    //Finding length of string
    
    int len;

    for(len=0; str[len] != '\0'; len++);
    len--;

    // Determining Palindrome

    for(int i=0, j=len; i<=len; i++, j--) {

        if(str[i] != str[j]) {

            printf("The given string is not a palindrome.");
            return 0;

        }

    } 

    printf("The given string is a palindrome.");

}