// Q. Statement: Find if the given matrix is symmetrical
//
//  Matrix A is Symmetric if, the transpose of Matrix A == Matrix A
// 

#include <stdio.h>

int main() {

    // Determining the size of the Matrix

    int row, col;

    printf("Input the no. of rows in the matrix: ");
    scanf("%d", &row);

    printf("Input the no. of columns in the matrix: ");
    scanf("%d", &col);

    // Creating a Matrix A with the size as taken from user

    int matA[row][col];

    printf("Enter %d values for your matrix.", row*col);

    for(int i=0; i<row; i++) {

        for(int j=0; j<col; j++) {

            printf("\nEnter the value for matrix at position A[%d, %d]: ", i+1, j+1);
            scanf("%d", &matA[i][j]);
        }

    }

    // Printing the Matrix A for validation

    printf("Input successfully received. Here's the given matrix:\n");

    for(int i=0; i<row; i++) {

        printf("\n\t");
        
        for(int j=0; j<col; j++) {

            printf("%d\t", matA[i][j]);

        }

    }

    printf("\n");

    // Checking if the Matrix is symmetric
    // The first step would be to see if the no. of rows == no. of columns in the Matrix as that is needed
    //      for the Matrix to be symmetric.

    if(row != col) {

        printf("As the no. of rows != no. of columns, the given matrix is asymmetric.");
        return 0;
    }

    // If the above statement is no true, the program should check each of the indivudal values to see if the Matrix is symmetric

    else {


    }
    
}