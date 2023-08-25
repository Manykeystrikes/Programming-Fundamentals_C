#include <stdio.h>
#include <stdlib.h>

/*Write a program that reads in the count of array elements and the actual array elements (all of which 
are integers). Your program must rearrange the numbers in the array such that every 3 is followed by a 
4. Do not move the 3’s, but every other number may move. The given array contains the same number 
of 3’s and 4’s. Every 3 has a number after it that is not a 3 or 4, and a 3 appears in the array before any 
4.
Sample Run:
Input               Output
4 1 3 1 4           1 3 4 1
4 3 2 2 4           3 4 2 2
7 1 3 1 4 4 3 1     1 3 4 1 1 3 4
*/

int main()
{
    int n;
    scanf("%d", &n);
    int *values = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &values[i]);
    int j = 2;    
    for (int i = 0; i < n; i++)  
    {
        if (values[i] == 3)
        {
            while (values[j] != 4)
            {
                j++;
            }
            //swap values [i+1] and values [j]
            int tmp = values[i+1];
            values[i+1] = values[j];
            values[j] = tmp;
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
