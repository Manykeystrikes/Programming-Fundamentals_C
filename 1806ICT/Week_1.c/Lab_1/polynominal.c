#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double sqrt_d = sqrt(b * b - 4 * a * c);
    double x1 = (-b - sqrt_d) / (2 * a); 
    double x2 = (-b + sqrt_d) / (2 * a);
    printf("%.3lf %.3lf\n", x1, x2);




    return 0;
} 