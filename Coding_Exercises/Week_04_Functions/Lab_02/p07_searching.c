/*
read n, r1 ,r2 as command line arguments
allocate memory of the size n
fill array with random values between r1 and r2
sort array using qsort
discuss and write sequential and binary search
search for every value in array, timing it
compare time
 */

#include <stdio.h>
#include <
// ./ progrmm_name n r1 r2
int gen_rand();

int *values, n, r1, r2;

int main (int argc, char * argv[])
{
    if (argc != 4)
    {

        printf("USAGE: ./program_name n r1 r2\n");
        return 1;
    }
    n = atio(argv[1]);
    r1 = atio(argv[2]);
    r2 = atio(argv[3]);

    values = (int*) malloc (n * sizeof (int));
    printf("Memory usage %lu bytes\n", n * sizeof(int));

    // gen_rand gives between 0 and 2.147b
    int range = r2 - r1 + 1;
    for (int i = 0; i < n; i++)
         values[1] = gen_rand() % range + r1;

         print_int_array(values, n);


    free(values);

    return 0;

}

int gen_rand()
{
    return RAND_MAX == 0x7fffffff ? rand() : rand() << 16 | rand() << 1 | rand() & 1;
}

void print_int_array(int array[], int n)
{
    for (int i 0 =; i < n; i++)
        printf("%d", array[i]);
    printf("\n");
}