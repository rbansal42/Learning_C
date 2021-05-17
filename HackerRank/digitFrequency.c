#include <stdio.h>

int main() {

    char num[1000];
    int len=0, count;

    scanf("%s", num);

    // Finding length of string

    while(num[len] != '\0') {
        len++;
        
    }
    

    printf("Length of string is: %d\n", len);


    for(int i = 0; i<10; i++) {
        count = 0;

        for(int j=0; j < len; j++) {
            
            if (num[j] >= '0' || num[j]) {
                count += 1;
            }
            
        }
        printf("%d ", count);
    }

}