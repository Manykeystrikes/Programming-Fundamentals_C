#include <stdio.h>

/*. Given 3 numbers, print the largest. 
Input Output
3 2 1 3 
1 2 3 3 
3 3 3 3
*/


int main ()
{
    int a, b, c, largest;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) 
        printf("%d\n", a);
     else if (b >= a && b >= c)
        printf("%d\n", b);  
     else 
        printf("%d\n", c);

        // approch using if / else statements
       
       if (a >= b && a >= c) 
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
    printf("%d\n", largest);

    // approcah using ternary expression

    largest = 0;
    if (a >= b)
        largest = (a > c) ? a : c;
    else if  (b >= a)
        largest = ( b > c) ? b : c;

        printf("%d\n", largest);

    return 0;
}