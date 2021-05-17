#include <stdio.h>

int main() {

    int row, col;

    printf("Enter the no of rows in matrix: ");
    scanf("%d", &row);

    printf("Enter hte no of columns in the matrix: ");
    scanf("%d", &col);

    int mat[row][col], dup[row][col];

    printf("Enter %d elements: ", row*col);

    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            scanf("%d", &mat[i][j]);
        }
    }

    // Duplicating Matrix

    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            dup[i][j] = mat[i][j];
        }
    }

    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            printf("%d\t", dup[i][j]);
        }
        printf("\n");
    }

}