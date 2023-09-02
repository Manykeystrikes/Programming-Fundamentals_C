#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// global variables
int *values, r1, r2, n;

// function prototypes

int gen_rand();
void print_int_array(int array[], int n);
int cmp_int(const void *a, const void *b);
bool sequential_search(int array[], int n, int value);
bool binary_search(int array[], int n, int value);

int main(int argc, char *argv[])
{
    // check if correct number of command line arguments
    if (argc < 4)
    {
        printf("Program usage: ./program_name n r1 r2\n");
        return 1;
    }

    // assign n, r1, r2 from the command line
    n = atoi(argv[1]);
    r1 = atoi(argv[2]);
    r2 = atoi(argv[3]);

    values = (int*)malloc(n * sizeof(int));
    printf("%lu bytes used\n", n * sizeof(int));
    
    int range = r2 - r1 + 1;
    
    //fill values with random number, between r1 and r2
    for (int i = 0; i < n; i++)
        values[i] = gen_rand() % range + r1;

    // sort array of values
    qsort(values, n, sizeof(int), cmp_int);

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

// return negative if a < b, positive if b < a, 0 if equal, 
int cmp_int(const void *a, const void *b)
{

    return *(int*)a - *(int*)b;

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