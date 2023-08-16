#include <stdio.h>

int main()

{
    int a;
    printf("Enter a value between 0 and 10\n");
    scanf("%d", &a);
    if (a < 0 || a > 10)
        return 1;

    printf("%d\n", a);

    return 0;
}