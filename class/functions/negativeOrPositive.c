
#include <stdio.h>

int isEven(int x)
{
   return(x%2==0);
}

int isPositive(int x)
{
   return(x > 0);
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

    return 0;
}