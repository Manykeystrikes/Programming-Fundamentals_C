#include <stdio.h>
#include <math.h>

int main()
{
    char desired_grade;
    float min_req, curr_avg;
    int final_ptc;

    printf("Enter disired grade> ");
    scanf("%c", &desired_grade);
    printf("Enter minimum score for desired grade> ");
    scanf("%f", &min_req);
    printf("Enter current average score> ");
    scanf ("%f", &curr_avg);
    printf("Enter final exam perentage> ");
    scanf("%d", &final_ptc);
    float exam_score = (min_req - (curr_avg * ((100.0 - final_ptc)/ 100))) * (100.0 / final_ptc);
    printf("Required score is %.2f on final exam to achieve %c\n", exam_score, desired_grade);
    
    return 0;
}
