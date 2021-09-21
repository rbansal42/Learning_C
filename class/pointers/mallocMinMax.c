// Using malloc function, find MIN and MAX in an array.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ch, *t;
    int min, max;

    ch = (int *) malloc(10 * sizeof(int));

    for(int i = 0, t = ch; i < 10; t++, i++); {

        printf("\nEnter Value: ");
        scanf("%d", t);

        if(*t < min)
            min = *t;

        if(*t > max)
            max = *t;
    }

    printf("Min is: %d\n", min);
    printf("Max is: %d\n", max);



}
