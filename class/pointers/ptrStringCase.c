// Write a program to change the entire case of the string to lower/upper.

//Expansion - Toggle case, Sentence case, Title Case

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

void toToggleCase(char *s) {

    for(int i=0; s[i] != '\0'; i++) {

        if('a' <= s[i] && 'z' >= s[i]) 
            s[i] = s[i] - ('a' - 'A');
    
        else if('A' <= s[i] && 'Z' >= s[i])
            s[i] = s[i] + ('a' - 'A');
    }
}

void toTitleCase(char *s) {

    if('a' <= s[0] && 'z' >= s[0]) 
            s[0] = s[0] - ('a' - 'A');

    for(int i=0; s[i] != '\0'; i++) {

        if(s[i] == ' ') {
            
            i++;

            if('a' <= s[i] && 'z' >= s[i]) 
            s[i] = s[i] - ('a' - 'A');
        }
        
    }
}

void toSentenceCase(char *s) {

    if('a' <= s[0] && 'z' >= s[0]) 
            s[0] = s[0] - ('a' - 'A');

    for(int i=0; s[i] != '\0'; i++) {

        if(s[i] == '.' || s[i] == '!' || s[i] == '?') {
            
            i+=2;

            if('a' <= s[i] && 'z' >= s[i]) 
            s[i] = s[i] - ('a' - 'A');
        }
    }
}

int caseChoice(char *ptr) {

    int choice;

    printf("\n\nInput '1' for Upper Case.");
    printf("\nInput '2' for Lower Case.");
    printf("\nInput '3' for Toggle Case.");
    printf("\nInput '4' for Title Case.");
    printf("\nInput '5' for Sentence Case.");

    printf("\n\nInput: ");
    scanf("%d", &choice);

    if (choice == 1) {
        toUpperCase(ptr);
    }
    else if (choice == 2) {
        toLowerCase(ptr);
    }
    else if (choice == 3) {
        toToggleCase(ptr);
    }
    else if (choice == 4) {
        toTitleCase(ptr);
    }
    else if (choice == 5) {
        toSentenceCase(ptr);
    }
    else {
        printf("Invalid input. Try again.");
        caseChoice(choice);
    }

}

int main() {

    char str[120], *ptr;
    ptr = str;

    int fnc;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("\nInput: %s", ptr);

    caseChoice(ptr);

    printf("Output: %s\n", ptr);

    return 0;

}