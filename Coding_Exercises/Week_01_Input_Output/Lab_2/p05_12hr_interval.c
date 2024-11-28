#include <stdio.h>

int main()
{
    int hrs, mins, secs, pm;
    printf("Enter 12 hours time of day (hours minutes seconds and pm)\n");
    scanf("%d %d %d %d", &hrs, &mins, &secs, &pm);
    int t_hrs, t_mins, t_secs;
    scanf("%d %d %d", &t_hrs, &t_mins, &t_secs);

    secs += t_secs;
    mins += secs / 60;
    secs %= 60;

    mins += t_mins;
    hrs += mins / 60;
    mins %= 60;

    hrs += pm * 12;
    hrs += t_hrs;
   
    pm = (hrs / 12) % 2;
    hrs %= 12;

    printf("%d %d %d %d\n", hrs, mins, secs, pm);

    return 0;
}