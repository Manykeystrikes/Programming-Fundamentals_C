#include <stdio.h>

//function prototypes
int gcd(int a, int b);

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));


    return 0;
}


// function implementations
int gcd(int a, int b);
{
    int m = a < b ? a : b;
    for (int i = m; i >= 1; i--)
        if (a % i == 0 && b % i == 0)
             return i;
        return 1;     

}