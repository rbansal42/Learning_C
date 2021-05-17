#include <stdio.h>
#define ROW 2
#define COL 2
int main() 
{
    int mat[ROW][COL],i,j,max=0;
   
    printf("Enter Elements of Matrix ==>> ");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&mat[i][j]);
            if(max<mat[i][j])
                max=mat[i][j];
        }
    }
    for(i=0;i<ROW;i++)
    {
        printf("\n");
        for(j=0;j<COL;j++)
        {
            printf("\t%d",mat[i][j]);
        }
    }
    printf("\n Max in the matrix is : %d",max);
      
 return 0;
}