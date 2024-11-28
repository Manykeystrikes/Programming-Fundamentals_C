#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main ()
{
double degrees;
scanf("%lf", &degrees);
double radians = (degrees * M_PI) / 180.0;
printf("%lf\n", radians);

return 0;
}