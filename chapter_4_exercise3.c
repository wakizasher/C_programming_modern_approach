/*
    Write a program that calculates how many digits a number contains. 
    You may assume that the number has no more than four digits. 
*/
#include <stdio.h>

int main(void)
{
    int number; 
    printf("Enter the number: "); 
    scanf("%d", &number); 

    if (number >= 0 && number <= 9) 
    {
        printf("The number %d has 1 digit\n", number);
    }
    else if (number >=10 && number <= 99)
    {
        printf("The number %d has 2 digits\n", number);
    }
    else if (number >=100 && number <= 999)
    {
        printf("The number %d has 3 digits\n", number);
    }
    else if (number >=1000 && number <= 9999)
    {
        printf("The number %d has 4 digits\n", number);
    }
    else 
    {
        printf("The number has more than 4 digits\n");
    }
}
