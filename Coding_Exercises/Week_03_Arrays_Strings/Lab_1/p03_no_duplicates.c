#include <stdio.h>
#include <stdbool.h>

/* Write a program that reads in 20 integer numbers, each of which is between 1 and 10, inclusive. Use 
an array to store the numbers as they are being read in, if and only if that number is not a duplicate of a 
number already read. Print out the array containing non-duplicate numbers.
Sample Run:
Input                                       Output
1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1 2    1 2 3 4 5 6 7 8 9 10
1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 2 2 2 2 2     1 2
*/


int main()
{
    int values[10];
    int n = 0;
    bool found;
    for (int i = 0; i < 20; i++) // loop 20 times
    {
        int x;
        scanf("%d", &x); // read value x
        found = false;
        for (int j = 0; j < n; j++) // check if x in values
        {
            if (values [j] == x)
            {
                found = true;
                break;
            }
        }
        if (!found) // if not in values, add to values
        {
            values [n] = x;
            n++; // increment size of values
        }
        
    }
    /*
    read in a number chech if the x is in values if not in values
    add at index n increment n
    */
    for (int i = 0; i < n; i++)
        printf("%d ", values[i]);
    printf("\n");


    return 0;

}
