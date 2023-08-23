#include <stdio.h>
#include <stdbool.h>


/*Given a day of the week encoded as 0=Sun, 1=Mon, 2=Tue,. ..6=Sat, and an int 
indicating if we are on vacation, print a string of the form "7:00" indicating when the 
alarm clock should ring. Weekdays, the alarm should be "7:00" and on the weekend it 
should be "10:00". Unless we are on vacation -- then on weekdays it should be "10:00" 
and weekends it should be "off". 
 
Input Output
 1 0 7:00 
 0 0 10:00 
 0 1 off 

 
 5 1 10:00
 */
int main ()
{
    int day, vacation;
    scanf("%d %d", &day, &vacation);
    bool weekend = day == 0 || day == 6;
    if (vacation)
    {
        if (weekend) // on vacation and weekend
            printf("Turn the alarm off\n");
        else // on vacation and weekday
            printf("10:00\n");
   }
   else
    {
        if (weekend) // not vacation and weekend
            printf("10:00\n");
        else // not vacation and weekday
            printf("07:00\n");
    }

    return 0;
}