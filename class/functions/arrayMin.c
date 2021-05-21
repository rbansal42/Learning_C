#include <stdio.h>
#define SIZE 5

int findSum(int d[SIZE],int s)
{
    int i,sum=0;
    
    for(i=0;i<s;i++)
        sum=sum+d[i];
        
    return(sum);
}

int findMax(int d[SIZE],int s)
{
    int i,max=d[0];
    
    for(i=0;i<s;i++) {
        
        if(max < d[i])

        max = d[i];
    }
        
    return(max);
}

int findMin(int d[SIZE],int s)
{
    int i,min=d[0];
    
    for(i=0;i<s;i++) {
        
        if(min > d[i])

        min = d[i];
    }
        
    return(min);
}

int main() 
{
    int x[SIZE],i,y;
    
    printf("\n Enter %d Number : ",SIZE);
    for(i=0;i<SIZE;i++)
        scanf("%d",&x[i]);
    
    y=findSum(x,SIZE);
    
    printf("\nThe sum of elements is : %d",y);

    printf("\nThe max is %d", findMax(x, SIZE));

    printf("\nThe min is %d", findMin(x, SIZE));
    
    return 0;
}