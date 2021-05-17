#include <stdio.h>

int main() {

    char str[100], rts[100];
    int len;

    printf("Input a string: ");
    scanf("%[^\n]s", str);

    for(len = 0; str[len] != '\0'; len++);

    for(int j = 0, i = len-1; i >= 0; j++, i--) {

        rts[j] = str[i];
    }

    printf("The string you entered is: %s", str);
    printf("\nThe reverse of the string is: %s", rts);

}