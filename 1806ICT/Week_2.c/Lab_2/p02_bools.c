#include <stdio.h>
#include <stdbool.h>

/*Write C code that reads two integers from the keyboard. If the first integer is in the 
range 1. . 100 and the first integer is less than the second integer OR if the first integer 
is at least twice the second integer and the second integer is not in the range -8..16 
(with the exception it can be zero) print 1. Otherwise print 0. All ranges are inclusive 
 
Input Output
10 50   1 
20 5    0 
100 20  1 
30 20   0 
2 0     1 
16 5    0
*/


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    bool cond1 = (a >= 1 && a <= 100) && a < b;
    bool b_in_range = b >= -8 && b <= 16;
    bool cond2 = (a >= b*2) && (b == 0 || !b_in_range);
    printf("%d\n", cond1 || cond2);


    return 0;
}