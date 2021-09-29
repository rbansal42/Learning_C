// Create a function that takes a string and return its reverse as output.

#include <stdio.h>
#include <stdlib.h>

void strRev(char *s) {

    int strLength=0;
    char rev;

    // Getting the length of the string

    for(strLength; s[strLength] != '\0'; strLength++);

    for(int i = 0, j; i < j; i++, s++, j--) {

        rev = s[i];
        s[i] = s[strLength];
        s[j] = rev;

    }

}

int main() {

    char *str; int x;

    printf("Length of string: ");
    scanf("%d", &x);

    printf("Enter string: ");
    str = (char *) malloc (x * sizeof(char));
    scanf("%s", str);

    srev(str);

    printf("\nRev is %s", str);
    
    
    return(0);


}