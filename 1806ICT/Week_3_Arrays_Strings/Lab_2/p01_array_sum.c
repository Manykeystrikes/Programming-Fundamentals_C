#include <stdio.h>

/*Write a program that reads in the size of an array and the array elements (all of which are integers). 
The program then computes the sum of all the elements in the given array. Note: If the input is 3 1 4 8, 
then the array has 3 elements {1, 4, 8}.
Hint: After you read the first number into variable n you know how many integers to read.
Sample Run:
Input           Output
3 1 4 8         13
5 2 4 6 8 13    33
*/

int main()
{
    int values[100];
    int n;
    scanf("%d", &n);
        if (n > 100)
        {
            printf("Promgram designed for n < 100\n");
            return 1;
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &values[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += values[i];
          
        }
        printf("%d\n", sum);

    return 0;
}