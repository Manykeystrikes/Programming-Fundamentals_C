#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *values, r1, r2, n;

int gen_rand();
void print_int_array(int array[], int n);
bool sequential_search(int array[], int n, int value);


int main(int argc, char *argv[])

{
    
 
    n = atoi(argv[1]);
    r1 = atoi(argv[2]);
    r2 = atoi(argv[3]);

        
    int range = r2 - r1 + 1;

    for (int i = 0; i < n; i++)
        values[i] = gen_rand() % range + r1;

   
    print_int_array(values, n);

    free (values);
    return 0;
}
 
    int gen_rand()

    {
    return RAND_MAX == 0x7fffffff ? rand() : rand() << 16 | rand() << 1 | rand() & 1;
    }
    


void print_int_array(int array[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");


}

bool sequential_search(int array[], int n, int value)
{
    for  (int i = 0; i< n; i++)
        if ( array[i] == value)
            return true;
        return false;
}
bool binary_search(int array[], int n, int value)
{
    int lower = 0, upper = n-1;
    while (lower <= upper)
    {
        int middle = (upper + lower) / 2;
        if (array[middle] == value)
            return true;
        else if (array[middle] < value)
            lower = middle + 1;
        else
            upper = middle - 1;
        
    }
    return false;
}