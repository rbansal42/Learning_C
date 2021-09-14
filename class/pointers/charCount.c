// Q. Find the occurence of a particular character in a given string.

#include <stdio.h>

int charCount(char *str, char c) {

    int count = 0;

    for(int i=0; *str != '\0'; i++, str++) {

        if(*str == c)
            count += 1;
    }

    return count;

}

int main() {

    char str[20], c;
    int count;

    printf("Input a string: ");
    scanf("%[^\n]", str);

    printf("Input the character to count: ");
    scanf("\n%c", &c);

    printf("\nInput: %s\n", str);

    count = charCount(str, c);

    printf("Output: %d\n", count);
    
}