/* Question Link: https://www.hackerrank.com/challenges/for-loop-in-c/problem


*/


#include <stdio.h>

int main() {

    int n;

    printf("Input a number: ");
    scanf("%d", &n);


    // For when n is less than 9
    if (n <= 0){

        printf("Invalid Input. Enter a number greater than 0.");
        return 0;
    }
    
    else if (n == 1)
        printf("one");  
    else if (n == 2)
        printf("two");
    else if (n == 3)
        printf("three");
    else if (n == 4)
        printf("four");
    else if(n == 5)
        printf ("five");
    else if(n == 6)
        printf ("six");
    else if(n == 7)
        printf ("seven");
    else if(n == 8)
        printf ("eight");
    else if(n == 9)
        printf ("nine");
    

    // For case when n is greater than 9
    else if (n > 9 && n%2 == 0)
        printf("Even");

    else if (n > 9 && n%2 != 0) 
        printf("Odd");

}