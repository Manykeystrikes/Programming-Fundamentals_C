#include <stdio.h>
#include <stdbool.h>

/*We'll say that a number is "teen" if it is in the range 13 ..19 inclusive. Given 3 integer 
values, print 1 if one or more of them are teen*/

int main ()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    bool cond_a = a >= 13 && a <= 19;
    bool cond_b = b >= 13 && b <= 20;
    bool cond_c = c >= 13 && c <= 20;
    bool final_cond = cond_a || cond_b || cond_c;
    printf("%d", final_cond);
    

    return 0;
}