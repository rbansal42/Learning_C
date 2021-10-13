#include <stdio.h>

int main() {

    int length;

    printf("Enter the length of the word: ");
    scanf("%d", &length);

    char word[length];

    printf("Enter the word: ");
    
    for(int i=0; i<=length; i++) {
        scanf("%c", &word[i]);
    }


    printf("The word you entered is: ");

    for(int i=0; i<=length; i++) {
        printf("%c", word[i]);
    }

}