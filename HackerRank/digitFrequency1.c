#include <stdio.h>

int main() {

    char num[1000];
    int len, count;
    char map[15];
    

    scanf("%[^\n]s", num);

    for(len = 0; num[len] != '\0'; len++);

    printf("The length of the input string '%s' is %d", num, len);

    
    // Code for iterating through numbers 0-9

    for(int i=48; i<57; i++) {

        map[i] = i;
    }

    for(int i=0; i<10; i++) {
        printf("%c", map[i]);
    }

    for(int i = 0; i < 10; i++) {
        count = 0;

        for(int j = 0; j <= len; j++) {

            if(map[i] == num[j]) {

                count++;
            }
        }

    printf("\nThe frequency of digit %d is: %d", i, count);
    }

}