#include <stdio.h>

int main() {

    char s[30];

    printf("Enter your name: ");
    scanf("%[^\n]s", s);

    printf("Hello, ");

    for(int i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);

    printf("\n");
    
    // Experimental part
    
    for(int i=0; s[i]!='\0'; i++){

        if(s[i] == ' ') {

            printf("\t");
        }

    printf("%d ", s[i]);

    }


}