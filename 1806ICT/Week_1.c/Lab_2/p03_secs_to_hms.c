#include <stdio.h>


int main()

{
    int secs, mins, hrs;
    scanf("%d", &secs);
    hrs = secs / 3600;
    secs %= 3600;
    mins = secs / 60;
    secs %= 60;
    printf("%d %d %d\n", hrs, mins, secs);

    return 0;
}    
