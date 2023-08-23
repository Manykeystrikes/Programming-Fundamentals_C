#include <stdio.h>
#include <stdbool.h>
/*Write C code that reads two integers from the keyboard. Given two inclusive ranges 
-8..-4 and 10..16 print 1 if both integers are in one of these ranges or both integers are 
not in these ranges. Otherwise print 0. All ranges are inclusive 
 
Input Output
10 50 0 
-6 11 1 
100 20 1 
5 20 1 
5 12 0
10 0 0
*/
int main()

{

    int a, b;

scanf("%d %d", &a, &b);
bool cond_a = (a >= -8 && a <= -4) || (a >= 10 && a <= 16);
bool cond_b = (b >= -8 && b <= -4) || (b >= 10 && b <= 16);
bool final_cond = ( cond_a && cond_b) || (!cond_a && !cond_b);
printf("%d\n", final_cond);




    return 0;
}