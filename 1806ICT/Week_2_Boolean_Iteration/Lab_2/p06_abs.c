#include <stdio.h>
#include <math.h>
/*Given an int n, print the absolute difference between n and 21, except print double the 
absolute difference if n is over 21. 
 
Input Output
19 2 
10 11 
21 0 
*/
int main()

    {
        int n;
        scanf("%d", &n);
        int abs_diff = abs(n - 21);
        if (n > 21)
            printf("%d\n", abs_diff * 21);
        else 
            printf("%d\n", abs_diff);

        return 0;
    }