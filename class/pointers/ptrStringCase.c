// Write a program to change the entire case of the string to lower/upper.

#include <stdio.h>

void toLowerCase(char *s) {

    for(int i=0; s[i] != '\0'; i++) {

        if('A' <= s[i] && 'Z' >= s[i]) 
        s[i] = s[i] + ('a' - 'A');
    
    }
}

void toUpperCase(char *s) {

    for(int i=0; s[i] != '\0'; i++) {

        if('a' <= s[i] && 'z' >= s[i]) 
        s[i] = s[i] - ('a' - 'A');
    
    }
}

int main() {

    char str[30], *ptr;
    ptr = str;

    int fnc;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nInput: %s", ptr);

    printf("\n\nWould you like to convert the string to lower case or upper case?");
    printf("\nInput '1' for Upper Case and '2' for Lower Case.");
    printf("\nInput :");

    scanf("%d", &fnc);

    if (fnc == 1) {
        toUpperCase(str);
    }
    else if (fnc == 2) {
        toLowerCase(str);
    }
    else {
        printf("Invalid input. Try again.");
        return 0;
    }

    printf("Output: %s\n", ptr);

}