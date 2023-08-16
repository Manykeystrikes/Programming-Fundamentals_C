#include <stdio.h>

/*Given an input consisting of a set of integer numbers, write a program that prints
out the largest number. Your program must check for valid input.
 
3
Sample run:
Input   Output
11 25 43    43
-2 -5 -10   -2
0              0
No valid numbers were input
Apple No valid numbers were inpu*/

int main()
{
    int value, valid_input;
    valid_input =scanf("%d", &value);
    if (valid_input == 0)
        printf("No valid numbers were input\n");
    else
    {
        int largest = value;
        while (valid_input > 0)
    {
        valid_input = scanf("%d", &value);
        if (value > largest)
            largest = value;   
   
    }
     printf("%d\n", largest);

    }

    return 0;
}