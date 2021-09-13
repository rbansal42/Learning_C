// Write a pointer funciton that will change the value of char to upper case.

#include <stdio.h>

void toUpper(char *c) {

if(*c >= 'A' && *c <= 'Z') {
    return;
}

else {
    *c = *c - ('a' - 'A');
}

}

void main() {

char c;

printf("Input a character: ");
scanf("%c", &c);

printf("\nInput: %c\n", c);

toUpper(&c);

printf("Output: %c\n", c);

}