// The program should give the output of series like
//      2 + 22 + 222 + 2222 + 22222 + ...,  for n terms

#include <stdio.h>

void main() {

    int n, sum=2, total=0;

    printf("Input a number: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {


        sum = (sum*10) + 2;

        total = total + sum;

    }

    if(n == 0)
        
        printf("%d", sum);

    else
        printf("%d", total);

}