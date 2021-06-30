#include <stdio.h>

    void printTable(int n, int limit) {

        for(int i=0; i<=limit; i++) {

            printf("%d X %d = %d\n", n, i, n*i);
        
        }

        return;
    }


int main() {

    int n, limit;

    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printTable(n, limit);

}