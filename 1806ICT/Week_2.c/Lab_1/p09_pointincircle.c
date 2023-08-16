#include <stdio.h>
#include <math.h>

/*Given the user input of a point (x, y) and a circle (x, y, r), display whether the point is 
inside the circle*/

int main ()
{
   int x, y, cx, cy, cr;
   printf("Enter point (x, y): ");
   scanf("%d %d", &x, &y);
    printf("Enter circle (x, y, c): ");
    scanf("%d %d %d", &cx, &cy, &cr);

    int a = x - cx;
    int b = y - cy;
    int c = sqrt(a*a + b*b);

    if (c <= cr)
        printf(" Point is inside the circle\n");
    else
        printf("Point is outside the cirle\n");       

    return 0;
}