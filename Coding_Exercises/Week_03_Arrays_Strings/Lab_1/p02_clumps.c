#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* Write a program that reads in the count of array elements and the actual array elements (all of which 
are integers). Say that a “clump” in the given array is a series of 2 or more adjacent elements of the 
same value. Your program will print out the number of clumps in the given array.
Sample Run:
Input           Output
6 1 2 2 3 4 4       2
5 1 1 2 1 1         2
7 1 1 1 1 1 1 1     1
*/

int main()
{
    int n;
    scanf("%d", &n);
    int *values = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &values[i]);
    int clumps = 0;
    bool inside_clump = false;
    for (int i = 0; i < n-1; i++) // checking values [i] == value[i+1]
    {
        if (!inside_clump && values[i] == values[i+1])
        {
            clumps++;
            inside_clump = true;
        }
        else if (values[i] != values[i+1])
        {
            inside_clump = false;
        }
    }
    printf("%d\n", clumps);

    return 0;
}