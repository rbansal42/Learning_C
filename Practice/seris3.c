#include <stdio.h>
int main(){
    int n,sum,j,i;
    int k=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {sum=0;
    for (j=1;j<=i;j++) {
    sum=sum+j;
    }
    k=k+sum;
}
printf("The addition is %d", k);
}