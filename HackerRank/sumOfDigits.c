#include <stdio.h>

int main() {

    int n, s=0;

    printf("Input a number between 10,000 & 99,999: ");
    scanf("%d", &n);

    if(n <= 10000 || n >= 99999) {
        printf("Invalid Input. Try Again.");
        return(0);
    }

    else {
        while(n > 0) {

            s = s + n%10;
            n = n/10;
            
        }

    printf("The sum of the digits of %d is %d.",n ,s);
    }
}