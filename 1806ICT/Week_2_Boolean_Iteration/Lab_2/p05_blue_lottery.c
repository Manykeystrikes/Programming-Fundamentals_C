#include <stdio.h>

/*You have a blue lottery ticket, with ints a, b, and c on it. This makes three pairs, which 
we'll call ab, bc and ac. Consider the sum of the numbers in each pair. If any pair sums 
to exactly 10, the result is 10. Otherwise if the ab sum is exactly 10 more than either bc 
or ac sums, the result is 5. Otherwise the result is 0. 
 
Input Output
9 1 0 10 
9 2 0 0 
6 1 4 10
*/


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ab = a + b;
    int bc = b + c;
    int ac = a + c;
    int result = 0;
    if (ab == 10 || bc == 10 || ac == 10)
        result = 10;
    else if  (ab == bc+10 || ac == ac+10)
        result = 5;

    printf("%d\n", result);

    return 0;

}