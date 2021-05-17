#include <stdio.h>

int main() {

    int row, col;

    printf("Enter the no. of rows in the matrix: ");
    scanf("%d", &row);

    printf("Enter the no. of columns in the matrix: ");
    scanf("%d", &col);

    int mat[row][col];

    printf("Input %d elements: ", row*col);

    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }


    //Separator between matrix and its transpose.
    printf("\n");


    for(int i=0; i<col; i++) {

        for(int j = 0; j < row; j++) {

            printf("%d\t", mat[j][i]);
        }
    
    printf("\n");
    }

}

