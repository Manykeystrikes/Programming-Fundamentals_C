#include <stdio.h>

/* You are driving a little too fast, and a police officer stops you. Write code to compute 
the result, encoded as an int value: 0=no ticket, 1=small ticket, 2=big ticket. If speed is 
60 or less, the result is 0. If speed is between 61 and 80 inclusive, the result is 1. If 
speed is 81 or more, the result is 2. Unless it is your birthday -- on that day, your speed 
can be 5 higher in all cases. 
 
Input Output
60 0    0 
65 0    1 
65 1    0
 */


int main()
{
    int speed, birthday, ticket;
    scanf("%d %d", &speed, &birthday);
    speed -= birthday * 5;
    if (speed <= 60)
        ticket = 0;
    else if (speed >= 60 && speed <= 80)
        ticket = 1;
    else 
        ticket = 2;
    printf("%d\n", ticket);

    return 0;
}