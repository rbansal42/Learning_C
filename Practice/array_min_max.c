#define no_of_values 5
#include <stdio.h>

int main() {

    int a[no_of_values];
    int i, max, min;

    printf("Enter Value 1: ");

    scanf("%d", &a[0]);
    max = a[0]; min = a[0];

    for(i = 1; i < 5; i++) {

    printf("Enter Value %d: ", i+1);    
    scanf("%d", &a[i]);

    // Finding Max Value in the array

    if(max < a[i]) {

        max = a[i];
    }

    // Finding Min Value in the array

    if(min > a[i]) {

       min = a[i];
    }
    }

    printf("The minimum value is: %d\n", min);
    printf("The maximum value is: %d\n", max);
}