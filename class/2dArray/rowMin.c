// Find the minimum in each row of the matrix

#include <stdio.h>

int main() {

    int row, col;

    printf("Enter the no. of Rows in the matrix: ");
    scanf("%d", &row);

    printf("Enter the no. of Columns in the matrix: ");
    scanf("%d", &col);

    int mat[row][col];
    //Receiving input from user for the matrix

    printf("Enter the values in the matrix from left to right & up to down.\n");
    
    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            scanf("%d", &mat[i][j]);
        }
    }

    //Printing the matrix

    printf("This is the matrix entered:\n");

    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }


    // Finding the minimum in the matrix and individual rows of the matrix 

    int min = mat[0][0];

    for(int i=0; i<row; i++) {

        int row_min=mat[i][0];

        for(int j=0; j < col; j++) {

            if(row_min > mat[i][j]) {
            
                row_min = mat[i][j];
            }
    
            if(min > mat[i][j]) {
                min = mat[i][j];
            }

        }

    printf("\nThe minimum in row %d is: %d", i, row_min);
            
    }

    printf("\nThe minimum in the matrix is: %d", min);
}