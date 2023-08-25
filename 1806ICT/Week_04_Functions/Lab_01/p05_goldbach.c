#include <stdio.h>
#include <stdbool.h>


/*The Goldbach conjecture says that every even integer n that is greater than 2 has the property that it is 
the sum of two prime numbers. Using your solution from Q3, write a program that will prove that the 
conjecture is true for all even integers between two numbers that you will input into the program.
Sample Run:
Input       Output
4 10        4 = 2 + 2
            6 = 3 + 3
            8 = 3 + 5
            10 = 3 + 7
*/

bool is_prime(int a);
void goldbach_conjecture(int a);
int main()
{
    int a = 4;
    int b = 10;
    for (int i = a; i <= b; i+=2)    
    goldbach_conjecture(i);

    return 0;
}

bool is_prime(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i<= a / 2; i++)
        if (a % i == 0)
            return false;
    return true;

}
void goldbach_conjecture(int a)
{
    for (int i = 2; i <= a; i++)
        if (is_prime(i))
        for (int j = i; j <= a; j++)
            if (is_prime(j))
                if (i + j == a)
                {
                    printf("%d = %d + %d\n", a, i, j);
                    return;
                }
    




}