/*
    Write a program that finds the largest in a series of numbers
    entered by the user. The program must prompt the user to enter numbers one by one. 
    When the user enters 0 or a negative number, the program must display the largest 
    nonnegative number entered: 

    Enter a number: 60
    Enter a number: 38.3 
    Enter a number: 4.89 
    Enter a number: 100.63 
    Enter a number: 75.2295 
    Enter a number: 0 

    The largest number entered was 100.63

    The number entered aren't necessarily enters
*/

#include <stdio.h>

int main(void)
{
    //initialize the number 
    float n; 
    float k = 0; 
    //Ask user for the input 

    do
    {
        printf("Enter a number: "); 
        scanf("%f", &n); 
        if (k < n)
        {
            k = n; 
        }
    }
    while (n > 0); 
    printf("The largest number entered was %.2f", k);
}