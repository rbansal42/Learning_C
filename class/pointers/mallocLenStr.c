// Find the lenght of a string using Malloc.

#include <stdio.h>
#include <stdlib.h>

int strLen(char *c) {

    int len=0;

    for(len = 0; c[len] != '\0'; len++);

    return len;
}


int main() {

    char c;
    int len;

    printf("Input the max length of string: ");
    scanf("%d", &len);

    printf("Input a string: ");
    c = (char *) malloc (len * sizeof(char));
    
    scanf("%s", c);

    len = strLen(c);
    return 0;

}