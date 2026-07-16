#include <stdio.h>
int main()
{
    int time = 3723;
    int hours;
    int minutes;
    int seconds;
    hours = time / 3600;
    minutes = (time % 3600) / 60;
    seconds = time % 60;
    printf("Output: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}