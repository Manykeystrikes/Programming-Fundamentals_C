#include <stdio.h>

/*4. Write C code which, given an integer grade, prints "Pass" if the grade is
 greater than or equal to 50 but less than or equal to 100. 
 If the grade is greater than or equal to 0 and less than 50 it 
 prints "Failed" otherwise it prints "Illegal Grade". 
 
Input   Output
10      Failed 
23      Failed 
50      Passed 
78      Passed 
128     Illegal Grade
*/


int main()
{
     int grade;
     scanf("%d", &grade);
     if (grade >= 50 && grade <= 100)
        printf("Passed\n");
    else if (grade >= 0 && grade < 50)
        printf("Failed\n");

    else 
        printf("Illegal Grade\n");

    // 2nd structure example
        
    scanf("%d", &grade);
    if (grade < 0 || grade > 100)
        printf("Illegal Grade\n");
    else if (grade >= 50)
        printf("Passed\n");
    else
        printf("Failed\n");        

    return 0;
}