#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Write a program that takes an integer and displays each digit of the integer in English.
Sample run:

Input Output
0       zero 
732     seven three two
-921    negative nine two one
*/

int main()
{
    int x;
    scanf("%d", &x);
    if (x < 0)
        printf("Negative ");
    x = abs(x);
    if (x == 0)
        printf("zero\n");
    else
    {    
        int num_digits = log10(x);
         for (int divider = pow (10, num_digits); divider > 0; divider /= 10)
        {
            int digit = x / divider % 10;
            switch (digit)

            {
                      
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            printf("invalid digit\n");
                break;
            }

        }
       printf("\n"); 
    }    
        return 0;
}