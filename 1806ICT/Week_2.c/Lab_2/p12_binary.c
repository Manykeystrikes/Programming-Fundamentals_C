#include <stdio.h>

 /*.Write a program that converts a binary number to its decimal equivalent. 
Sample run:
Input Output
10010   18
110     6
0       0
1       1
*/

int main()
{
    int binary, decimal = 0;
    scanf("%d", &binary);
    int power_of_two = 1;
    int temp_binary = binary;
    while (temp_binary > 0)
    {
        int bit = temp_binary % 10;
        if (bit)
            decimal += power_of_two;
        temp_binary /= 10;
        power_of_two *= 2;
            
    }
    printf("Binary: %d Decimal: %d\n", binary, decimal);

    return 0;
}