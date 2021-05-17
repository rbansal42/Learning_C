#include <stdio.h>

int main() {

    int n;

    printf("Input the length of the array: ");
    scanf("%d", &n);

    // Matching question specified constraints

    if(n <= 1 || n >= 1000) {

        printf("Invalid Input. Choose a number betwwen 1 and 1,000.");
        return 0;
    }

    // Taking input from user n times and storing in array a[n].

    int a[n];

    printf("Begin entering values\n");
    for(int i = 0; i<n; i++) {

        printf("Enter input at index %d: ", i);
        scanf("%d", &a[i]);
    }

    // Adding integers of the array

    int sum = 0; 

    for(int i=0; i<n; i++) {

        sum += a[i];
    }

    // Printing the sum of integers in the array

    printf("The sum of the vaues in the array is %d", sum);

}