// Q. Write a Program to check if a character is lowercase or not

#include <stdio.h>

int isLower(char c) {

    if(c >= 'a' && c <= 'z' ) {

        return 1;
    }

    else if(c >= 'A' && c <= 'Z') {

        return 0;
    }
}


int main() {

    char c;

    printf("Input a character to check: ");
    scanf("%c", &c);
    

     if(isLower(c)) {

        printf("The given character is lowercase.");
    }

    else {

        printf("The Given character is uppercase.");

    }
}