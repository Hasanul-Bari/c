/**
 * C program to print lower
  triangular matrix
 */

#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main()
{
    int array[MAX_ROWS][MAX_COLS];
    int row, col, isUpper;


    printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }

   for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
         if(row>col) array[row][col]=0;
        }
    }



        for(row=0; row<MAX_ROWS; row++)
        {
            for(col=0; col<MAX_COLS; col++)
            {
                printf("%d ", array[row][col]);
            }

            printf("\n");
        }


    return 0;
}
