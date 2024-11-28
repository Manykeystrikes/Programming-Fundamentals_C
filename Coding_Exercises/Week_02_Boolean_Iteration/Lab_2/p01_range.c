#include <stdio.h>
#include <stdbool.h>

/*Write C code that reads two integers, a and b from the keyboard. If a is 1 and b is in 
the range 1. . 100 OR if a is 0 and the b is not in the range 1..100 and is not in the range 
-20..-8 print 1. Otherwise print 0. All ranges are inclusive 
 
 
Input Output
1 50    1
1 105   0
0 50    0
0 200   1
0 5     0
*/

int main()
{
    int a, b;
    printf("Enter two intergers:");
    scanf("%d %d", &a, &b);
    // if b is in range 1 ...100
    // if b is not in range -20....-8
    bool b_in_range1 = b >= 1 && b <= 100;
    bool b_in_range2 = b >= -20 && b <= -8;
    bool cond1 = a == 1 && b_in_range1;
    bool cond2 = a == 0 && !b_in_range1 && !b_in_range2;
    bool final_cond = cond1 || cond2;
    printf("%d\n", final_cond);
    

    return 0;

}