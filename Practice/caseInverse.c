#include <stdio.h>

int main() {

    char s[100];

    printf("Input a string: ");
    scanf("%[^\n]", s);

    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i] <= 'a' && s[i] >= 'z') {

            s[i] = s[i] + '0';
            printf("%c", s[i]);
        }

        else if(s[i] <= 'A' && s[i] >= 'Z') {

            s[i] -= 49;
        }

    }

    // printf("The case inversed string is: %s", s);
}   