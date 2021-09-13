// Write a pointer funciton that will change the value of char to lower case.

#include <stdio.h>

void toUpper(char *c) {

if(*c >= 'a' && *c <= 'z') {
    return;
}

else {
    *c = *c + ('a' - 'A');
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