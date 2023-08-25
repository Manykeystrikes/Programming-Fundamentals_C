#include <stdio.h>
#include <stdbool.h>


/*An integer is said to be a prime number if it is divisible by 1 and itself. For example, 2, 3, 5, and 7 are 
prime numbers, but 4, 6, 8, and 9 are not. Write a function that determines if a number is prime.
Hint: Create a function prime which takes 1 integer parameter. In the function prime have C code that 
does the following:
- Loop, with i starting at 2 and going to a / 2 and check if i evenly divides a. If it does then a 
is not prime.
*/
bool is_prime(int a);

int main()
{

    for (int i = 1; i <= 100; i++)
        if (is_prime(i))
            printf("%d ", i);
    printf("\n");
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