#include <stdio.h>
#include <stdbool.h>

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