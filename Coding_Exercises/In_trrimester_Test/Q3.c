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

