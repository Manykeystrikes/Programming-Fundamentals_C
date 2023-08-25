#include <stdio.h>
#include <stdlib.h>

/* Write a program that reads in the count of array elements and the actual array elements (all of which 
are integers). The program then prints out an array that contains the exact same numbers as the 
original given array, but with the array elements rearranged such that all the even numbers come 
before all the odd numbers. Other than the latter requirement, the numbers can be in any order. 
Challenge: Instead of using a new array to store the rearranged numbers, try to rearrange the numbers 
in the original given array itself.
Sample Run:
Input           Output
4 3 4 5 6       6 4 5 3
5 14 2 5 13 9   14 2 5 13 9
*/

int main()
{
    int n;
    scanf("%d", &n);
    int *values = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &values[i]);
    }
    for  (int i = 0; i < n; i++)
    {
        if (values[i] % 2 == 1) //odd
        {
            for (int j = n-1; j > i; j--)
            {
                if (values[j] % 2 == 0) // even
                {
                    int tmp = values[i];
                    values[i] = values[j];
                    values[j] = tmp;
                    break;
                }
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", values[i]);
    }
    printf("\n");

    free(values);
    return 0;
}