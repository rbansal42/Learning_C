#include <stdio.h>

int main() {

    char a[30], b[30];

    printf("Enter a string: ");
    scanf("%[^\n]s", a);

    printf("The string you entered is: %s", a);

    // Creating a duplicate string

    for(int i=0; a[i] != '\0'; i++) {

        b[i] = a[i];
    }
    printf("\nThe duplicate of string is: %s", b);


}