#include <stdio.h>

    void printmenu(char c, int n) {

        for(int i=0; i<n; i++) {

            printf("%c", c);
        
        }

        return;
    }


int main() {

    char c;
    int n;

    printf("Enter the character to be printed: ");
    scanf("%c", &c);

    printf("Enter the number of times to be printed: ");
    scanf("%d", &n);
    
    printmenu(c, n);

}