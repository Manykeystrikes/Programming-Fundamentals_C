# include <stdio.h>
# include <stdbool.h>
/*1. Given two temperatures, print 1 if one is less than 0 and the other is greater than 100.
Input Output
120 1 0
1 120 0
-2 120 1
*/
int main()
{
    int temp1, temp2;
    scanf("%d %d", &temp1, &temp2);
    int cond1 = temp1 < 0 && temp2 > 100;
    int cond2 = temp2 < 0 && temp2 > 100;
    printf("%d\n",cond1 || cond2);

    return 0;
} 