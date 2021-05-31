// Find the average of 5 numbers using for loop

#include <stdio.h>

void main() {

    int num[5], average;

    printf("Input 5 numbers: ");
    
    for(int i=0; i<5; i++)
        scanf("%d", &num[i]);

    for(int i=0, sum=0; i<5; i++) {

        sum += num[i];

        average = sum/5;
    }

    printf("The Average of the given numbers is: %d", average);

}