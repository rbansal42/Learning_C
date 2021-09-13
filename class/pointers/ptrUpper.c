// Write a pointer funciton that will change the value of char to upper case.

#include <stdio.h>

void toUpper(char *c) {

if('A' <= *c && 'Z' >= *c) 

    printf("The character is already upper.");

else 
    *c = *c - ('a' - 'A');

}

void main() {

char c;

printf("Input a character: ");
scanf("%c", &c);
printf("\nInput: %c", c);

toUpper(&c);

printf("\nOutput: %c\n", c);

return;

}