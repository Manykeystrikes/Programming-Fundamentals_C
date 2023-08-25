#include <stdio.h>
#define SIZE 3


/* Write a program that performs the addition of two matrices of the same size. An example showing the 
addition of two matrices is given below:
3 6 1       4 1 3          7 7 4
2 1 4  +    2 5 5   =      4 6 9
5 2 3       1 2 3          6 4 6
Use two 2-D arrays to store the elements for the two matrices
*/
int main()
{
    int A[SIZE] [SIZE] = {{3, 6, 1},
                          {2, 1, 4},
                          {5, 2, 3}};
    int B[SIZE] [SIZE] = {{4, 1, 3},
                          {2, 5, 5},
                          {1, 2, 3}};
    int C[SIZE] [SIZE];
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            C [row] [col] = A[row] [col] + B[row] [col];
            
        }
    }                     
    for (int row = 0; row < SIZE; row++)
    {
        for (int col = 0; col < SIZE; col++)
        {
            printf("%d ", C[row][col]);
        }
        
        printf("\n");
    }

    return 0;
}