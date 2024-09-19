/*
    Write a program that asks the user for a 24-hour time, then display the time in 12-hour 
    form: 21:11 as 9:11 PM
*/

#include<stdio.h>

int main(void)
{
    int hour, minute; 
    printf("Enter a 24-hour time: "); 
    scanf("%d:%d", &hour, &minute);

    

    if (hour == 0)
    {
        printf("Equivalent 12-hour time: 12:%02d AM\n", minute);
    }
    else if (hour >= 1 && hour <= 12)
    {
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
    }
    else if (hour >= 13 && hour <= 23)
    {
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour - 12, minute);
    }
    else if (hour == 12)
    {
        printf("Equivalent 12-hour time: 12:%02d PM\n", minute);
    }
}