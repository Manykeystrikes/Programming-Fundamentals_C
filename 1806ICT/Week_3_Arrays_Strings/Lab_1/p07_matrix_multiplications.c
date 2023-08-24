#include <stdio.h>
#define SIZE 3


/* Write a program that performs the multiplication of two matrices of the same size. An example showing 
the multiplication of two matrices is given below (Note: Row 0, Column 0 of the first matrix should 
be 4 not 3)
3 6 1   4 1 3     29 36 45
2 1 4   2 5 5 =   14 15 23
5 2 3   1 2 3     27 21 34
*/
int main()
{
    int A[SIZE] [SIZE] = {{4, 6, 1},
                          {2, 1, 4},
                          {5, 2, 3}};
    int B[SIZE] [SIZE] = {{4, 1, 3},
                          {2, 5, 5},
                          {1, 2, 3}};
    int C[SIZE] [SIZE];
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            C[r] [c] = 0;
            for (int k = 0; k < SIZE; k++)
            {
                C[r][c] += A[r][k] * B[k][c];
            }
        }
    }                     
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            printf("%d ", C[r][c]);
        }
        
        printf("\n");
    }

    return 0;
}