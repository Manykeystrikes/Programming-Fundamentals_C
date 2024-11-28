#include <stdio.h>

/*Write a C program that calculates the deposit on a home loan as follows: 
 Loan < $25,000, deposit = 5% of Loan value 
 Loan >= $25,000 and < $50,000, deposit = $1,250 + 10% of loan over $25,000 
 Loan >= $50,000 and < $100,000, deposit = $5,000 + 25% of loan over $50,000 
 
 
Input Output
12000 600 
30000 1750 
80000 12500 
*/

int main()
{
   int loan;
   scanf("%d", &loan);
   int deposit;
   if (loan < 25000)
    deposit = 0.05 * loan;
   else if (loan < 50000)
        deposit = 1250 + 0.1 * (loan - 25000);
    else if (loan < 100000)
        deposit = 5000 + 0.25 * (loan - 50000);
    printf("%d\n", deposit);


    return 0;
}