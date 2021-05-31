#include <stdio.h>

int main() {

    int n;

    printf("Input no of terms: ");
    scanf("%d", &n);

    int series[n];

    series[0] = 0; series[1] = 1;

    for(int i=2; i<n; i++) {

        series[i] = series[i-2] + series[i-1];
    
    }

    for(int i=0; i<n; i++) {

        printf("%d ", series[i]);
    }
    

}