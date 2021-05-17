#include <stdio.h>
#define ROW 2
#define COL 2

int main() {
    // int row[2], col[2];
    int mat0[ROW][COL], mat1[ROW][COL], matSum[ROW][COL];
    int max[2], min[2];

    printf("Enter elements for Matrix 1: ");

    // Taking input for Matrix 1

    for(int i = 0; i<2; i++) {

        for(int j = 0; j < 2; j++) {

            scanf("%d", &mat0[i][j]);
        }
    }

    printf("Enter elements for Matrix 2: ");

    // Taking input for Matrix 2

    for(int i = 0; i<2; i++) {

        for(int j = 0; j < 2; j++) {

            scanf("%d", &mat1[i][j]);
        }
    }

    // Printing Matrix 1

    printf("Matrix 1 is:\n");

    for(int i = 0; i<2; i++) {

        for(int j =0; j<2; j++) {

            printf("%d\t", mat0[i][j]);
        }

        printf("\n");
    }


    // Printing Matrix 2

    printf("Matrix 2 is:\n");

     for(int i = 0; i<2; i++) {

        for(int j =0; j<2; j++) {

            printf("%d\t", mat1[i][j]);
        }

        printf("\n");

    }

    // Storing sum of the 2 matrices in 3rd matrix

    for(int i=0; i<2; i++) {

        for(int j=0; j<2; j++) {

            matSum[i][j] = mat0[i][j] + mat1[i][j];
        }
    }


    // Printing the sum of the 2 matrices

    printf("The sum of the Matrix 1 & Matrix 2 is:\n");

    for(int i=0; i<2; i++) {

        for(int j=0; j<2; j++) {

            printf("%d\t", matSum[i][j]);
        }

        printf("\n");
    }

}   