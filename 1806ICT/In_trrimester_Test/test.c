/*Q1*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool sum(char *commands, int *result);

int main()
{
  int i, sum, f, digit;
  scanf("%d, %d, %d", &i, &sum, &f, &digit);

  char *expressions[] = {"1*8 5/4", "6*8 2/0", "9%8 6*4 2/4", "1&3"};
 int result;
 for (int i = 0; i < i; i++)
   if (digit > 0) sum += digit;
  int factorial(int value)
  {
    int f = value;
    for (int i = value-1; i > 0; i--)
        f *= i;
    return f;

  }
int sum_series(int value)
  {
    int sum = 0;
    for (int i = 1; i <= value; i++)
            sum += factorial(i) / i;
  }
     printf("Result of %s is %d\n", expressions[i], result);
   else
     printf("%s Invalid Input\n", expressions[i]);  
 return 0;   
}

/*Q2*/
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

/*Q3*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_WORD 30

// Your global data structure for storing words 
char **words = {NULL};
int word_count = 0;
dict_file = fopen;
void load_file(char *fname); // Load from file into words
bool search(char *word);     // Check to see if word is in words  
bool find_close(char *word); // Generate close possibilities and call search()

int main(int argc, char *argv[])

{
  dict_file = fopen("dictionary-1.txt", "r");
  load_file(argv[1]);
  if (search(argv[2]))
   {if (!find_close(argv[2]))
      printf("There are no words close to %s\n", argv[2]);
   }
  else
   printf("%s is not in the dictionary\n", argv[2]);  
 
 return 0;
}