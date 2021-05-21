#include <stdio.h>

int isEven(int x)
{
    if(x%2==0)
      return(1);
    
    return(0);
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
    
    return 0;
}
