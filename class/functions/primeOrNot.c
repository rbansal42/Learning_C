
#include <stdio.h>

int isEven(int x)
{
   return(x%2==0);
}

int isPositive(int x)
{
   return(x > 0);
}

int isPrime(int x) {

    for(int i=2; i<x/2; i++) {

        if(x%i==0) {
            
            return 0;
        }
        
    }
    return 1;
}

int main() 
{
    int x;
    printf("\n Enter Number : ");
    scanf("%d",&x);
    
    if(isEven(x)) // 0 is false and any other number is true
    {
        printf("\n Number is even !!");
    }
    else
    {
        printf("\n Number is odd !!");
    }
    
    if(isPositive(x)) // 0 is false and any other number is true
    {
        printf("\n Number is positive !!");
    }
    else
    {
        printf("\n Number is negative !!");
    }

    if(isPrime(x) == 1) // 0 is false and any other number is true
    {
        printf("\n Number is prime !!");
    }
    else
    {
        printf("\n Number is composite !!");
    }

    return 0;
}