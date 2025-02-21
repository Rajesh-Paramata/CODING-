#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
void main()
{
int hours,seconds,minutes;
hours=minutes=seconds=0;
while(1)
{
    printf("\r%02d : %02d : %02d",hours,minutes,seconds);
    fflush(stdout);
    seconds++;
     if(seconds==60)
    {
        minutes+=1;
        seconds=0;
    }
    if(minutes==60)
    {
        hours+=1;
        seconds=0;
        minutes=0;
    }
    if(hours==24)
    {
        hours=0;
        minutes=0;
        seconds=0;
    }
    Sleep(1000);
}
}