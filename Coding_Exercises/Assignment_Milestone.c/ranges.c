#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// to assist with random nuber generation
int gen_rand()
{
    return RAND_MAX == 0x7fffffff ? rand() : rand() << 16 | rand() << 1 | rand() & 1;
}


/*run time perameters are on the command line*/
int main ( int argc, char *argv[])
{// ./analyse_nums 1000000 1 100
    int n = atoi(argv[1]);
    int r1 = atoi(argv[2]);
    int r2 = atoi(argv[3]);

    int range = r2 - r1 + 1; // r1 = 3, r2 = 10, range = 8

    int r = rand() % range + r1; // generates random numbers in a range


    clock_t start, end;
    start = clock();

    end = clock();

    double secs = (end-start) / CLOCKS_PER_SEC;

    //performance runs

    const int nops = 7;

    int tops = nops * 0.1 *n;

    int count = 0;

    while (count++ < tops)
    {int r = rand() % range + r1;
        int op = rand() % nops;
        double start = clock();
        switch (op)
        {
           case 0 : find(r); break;
           case 1 : add(r); break;
           case 2 : delete(r); break; 
        }


        double end = clock();
       // counts [op]++;
       // times [op] += (end - start);


    }

    return 0;
}