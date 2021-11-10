// Write a program to determine if a no. is fibonacci

#include <stdio.h>

void main() {

    int n;

    printf("Input number to check: ");
    scanf("%d", &n);

    int series[n];

    series[0] = 0; series[1] = 1;

    // Creating and storing a fibonnacci series.

    for(int i=2; i<50; i++) {

        series[i] = series[i-2] + series[i-1];

        if(series[i] == n) {

            printf("This is a fibonacci number. It is no %d in the sequence.", i+1);

            return;
        }

        else if(series[i] > n) {

            printf("The given no is fibonacci.");
            return;
        }
    
    }

}