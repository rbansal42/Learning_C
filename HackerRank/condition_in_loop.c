// https://www.hackerrank.com/challenges/for-loop-in-c/problem

#include <stdio.h>

int main() {

    int start, end;

    scanf("%d", &start);
    scanf("%d", &end);

    for(int n=start; n<=end; n++) {

        if (n == 1)
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
        
        else if (n > 9 && n%2 == 0)
            printf("even");

        else if (n > 9 && n%2 != 0)
            printf("odd");
        
        printf("\n");
        }
}