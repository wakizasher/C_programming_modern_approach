/*
    Write a program that prints a one-month calendar. 
    The user specifies the number of days in the month and the day of the week on which the month begins. 
    
    Enter number of days in month: 31
    Enter starting day of the week (1=Sun, 7=Sat): 3

    Hint: This program isn't as hard as it looks. The most important part is a for statement 
    that uses a variable i to count from 1 to n, where n is the number of days in the month, 
    printing each value of i. Inside the loop, an if statment test whethher i is the last day in a week; if 
    so, it prints a new-line character. 
*/
#include <stdio.h>

int main(void)
{
    int month; 
    int currentDayOfWeek; 
    int count = 1;
    int day;
    //Ask user for the input 
    printf("Enter number of days in month: "); 
    scanf("%d", &month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    currentDayOfWeek = day; 

    for (int j = 1; j < day; j++)
    {
        printf("  ");
    }

    for (int i = 0; i < month; i++)
    {
        
        printf("%3d ", count);
        count++; 
        currentDayOfWeek++;
        if (currentDayOfWeek > 7)
        {
            printf("\n");
            currentDayOfWeek = 1; 
        }
    }
    return 0; 
}