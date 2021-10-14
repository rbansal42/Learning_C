#include <stdio.h>

int main() {

    int len1, len2;

    printf("Enter size of array 1: ");
    scanf("%d", &len1);

    printf("Enter size of array 2: ");
    scanf("%d", &len2);

    int arr1[len1], arr2[len2];

    printf("\nEnter values for array 1.\n\n");

    for(int i=0; i<len1; i++) {

        printf("Enter value at index %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\n\nEnter values for array 2.\n\n");

    for(int i=0; i<len1; i++) {

        printf("Enter value at index %d: ", i);
        scanf("%d", &arr2[i]);
    }

    int maxlen = len1 + len2;
    int arr3[maxlen];

    int j;

    for(int i = 0, j=0; i<len1; i++) {

        arr3[i] = arr1[i];
    }
    for(int i = 0, j=len1; i<len2; i++, j++) {

        arr3[j] = arr2[i];
    }

    for(int i = 0; i<maxlen; i++) {

        printf("%d\t", arr3[i]);
    }

    printf("\n");

}