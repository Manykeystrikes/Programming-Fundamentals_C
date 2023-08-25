#include <stdio.h>

int main()
{
    int hrs, min, secs;
    printf("Enter 24 hours time(hours minutes seconds)\n");
    scanf("%d %d %d", &hrs, &min, &secs);
    int t_hrs, t_min, t_secs;
    printf("Enter a time interval (hours minutes seconds)\n");
    scanf("%d %d %d", &t_hrs, &t_min, &t_secs);

    secs += t_secs;
    min += secs / 60;
    secs %= 60;


    min += t_min;
    hrs += min / 60;
    min %= 60;

    hrs += t_hrs;
    hrs %= 24;
    printf("Resulting time\n");
    printf("%d %d %d\n", hrs, min, secs);


        return 0;
    }

