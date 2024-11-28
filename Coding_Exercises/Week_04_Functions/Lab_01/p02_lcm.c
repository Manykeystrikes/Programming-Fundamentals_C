#include <stdio.h>

/*The least common multiple (lcm) of two positive integers u and v is the smallest positive integer that is 
evenly divisible by both u and v. Thus, the lcm of 15 and 10, written as lcm(15, 10), is 30 because 30 is 
the smallest integer divisible by both 15 and 10. Write a function lcm() that takes two integer 
arguments, and returns their lcm. 
Hint: Create a function lcm which takes 2 integer parameters a and b and returns the least common 
multiple of these 2 integers. In the function lcm have C code that does the following:
- Let m equal the smallest of a and b
- Loop with i starting at m and increasing up to a * b. Stop when a and b both evenly divide i as i 
will be the least common multiple of a and b.
Sample Run:
Input   Output
15 10   30
48 24   48
*/
int lcm(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", lcm(a, b));
    return 0;
}

int lcm(int a, int b)
{
    int m = (a < b) ? a : b;
    for (int i = m; i < a*b; i++)
        if (i % a == 0 && i % b == 0)
            return i;

    return a*b;
}