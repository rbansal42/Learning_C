#include <stdio.h>
#define SIZE 5

int findSum(int d[SIZE],int s)
{
    int i,sum=0;
    
    for(i=0;i<s;i++)
        sum=sum+d[i];
        
    return(sum);
}

int main() 
{
    int x[SIZE],i,y;
    
    printf("\n Enter %d Number : ",SIZE);
    for(i=0;i<SIZE;i++)
        scanf("%d",&x[i]);
    
    y=findSum(x,SIZE);
    
    printf("\n The sum of elements is : %d",y);
    
    return 0;
}