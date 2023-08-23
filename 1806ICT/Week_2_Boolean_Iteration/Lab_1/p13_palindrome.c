#include <stdio.h>
#include <stdbool.h>

/*A palindrome is a number or a text phrase that reads the same backwards as well as 
forwards. Examples of palindromes are 123321, 1234321, 55555, 22, 454, 1, 0. Write 
a program that reads in a positive integer number, and prints out whether or not that 
number is a palindrome*/

int main()
{
    int x;
    scanf("%d", &x);
    int reversed_x = 0, temp_x = x;
    while (temp_x > 0)
    {
        reversed_x = reversed_x * 10 + temp_x % 10;
        temp_x /= 10;
    }
    bool palindrome = x == reversed_x;
    if (palindrome)
        printf("%d is a palindrome\n", x);
    else
        printf("%d is not a palindrome\n", x);


    return 0;
}