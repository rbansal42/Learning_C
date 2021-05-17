#include <stdio.h>

int main() {

    char s[1000];
    int len;

    scanf("%[^\n]s", s);
    
    // for(len; s[len] != '\0'; len++);

    for(int j=0; s[j] != '\0'; j++) {

        if(s[j] == ' ')
            printf("\n");

        else
            printf("%c", s[j]);
    }
}