#include <stdio.h>

/*Write a program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using functions*/

int factorial(int value);
int sum_series(int value);

int main()
{

    printf("%d\n", sum_series(5));
    return 0;
}

int factorial(int value)
{
    int f = value;
    for (int i = value-1; i > 0; i--)
        f *= i;
    return f;

}

int sum_series(int value)
{
    int sum = 0;
    for (int i = 1; i <= value; i++)
            sum += factorial(i) / i;

    return sum;
}