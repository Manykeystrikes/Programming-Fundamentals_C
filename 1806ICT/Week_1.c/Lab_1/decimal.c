#include <stdio.h>
#include <math.h>


int funzione1(float decimals)
{
    int i=2;
    while(decimals!=((int)decimals)){
        i++;
        decimals=decimals*10;
    }
    return 0;
}