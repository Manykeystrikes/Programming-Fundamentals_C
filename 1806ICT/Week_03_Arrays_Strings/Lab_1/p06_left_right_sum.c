#include <stdio.h>
#include <stdlib.h>

/*Write a program that reads in the count of array elements and the actual array elements (all of which 
are integers). Find the number of indexes in the array such that the sum of elements at lower indexes 
is equal to the sum of elements at higher indexes. For example given an array {-7, 1, 5, 2, -4, 3, 0}, one 
of such indexes is index 3 because 
-7 + 1 + 5 = -4 + 3 + 0
 Given the same array, another of such indexes is index 6 because
-7 + 1 + 5 + 2 – 4 + 3 = 0
 Therefore, the number of such indexes in the given array would be 2
 */

int main()
{
     int n;
     scanf("%d", &n);
     int *values = (int*)malloc(n * sizeof(int));
     for (int i = 0; i < n; i++)
        scanf("%d", &values[i]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // sum everthing left of i 
        int left_sum = 0;
        for (int j = 0; j < i; j++)
        {
            left_sum += values[j];
        }
        // sum everthing right of i
        int right_sum = 0;
        for (int j = i+1; j < n; j++)
        {
            right_sum += values[j];
        }
        if (left_sum == right_sum)
        {
            printf("Index: %d\n", i);
            count++;
        }

    }
    printf("%d\n", count);
    return 0;
}