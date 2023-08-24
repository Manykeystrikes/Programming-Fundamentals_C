#include <stdio.h>
#include <stdlib.h> // malloc
/*. Write a program that reads in the count of array elements and the actual array elements (all of which 
are integers). The program then prints out the minimum and 
maximum values in the given array.
Sample Run:
Input           Output
3 4 8 5         Min = 4, Max = 8
5 14 2 5 13 9   Min = 2, Max = 14*/

int main()
{
    //int values[100]; // asking for an array 100  elements
    // int values[100]; // static memory allocation
    // static approch
    int values[100];
    int n;
    scanf("%d", &n);
    if (n > 100)
    {
        printf("Program designed for n < 100\n");
        return 1;
    }
    
    
    // dynamic approach
    int *values = (int*)malloc(n * sizeof(int));//allow auto allocaiton of required memory
    if (!values)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        scanf("%d", &values[i]);

    int min = values[0];
    int max = values[0];
    for (int i= 1; i < n; i++)
    {
        if (values[i] < min)
        {
            min = values[i];
        }
        if (values[i] > max)
        {
            max = values[i];
        }
    }
        printf("Min = %d, Max = %d\n", min, max);
        free(values);
        



    return 0;


}
