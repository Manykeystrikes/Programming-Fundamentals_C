#include <stdio.h>
#include <math.h>

int main()
{
    double area, width, height;

    printf("Enter the area> ");
    scanf("%lf", &area);
    printf("Enter the width> ");
    scanf("%lf", &width);
   
    
    height = area / width;
    //printf("Area=%lf Width=%lf\n", area, width);

    printf("Height =%.1lf\n", height);
    return 0;
}