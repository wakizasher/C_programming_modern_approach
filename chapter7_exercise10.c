/*
    Write a program that takes a first name and last name entered by the user
    and displays the last name, a comma, and the first initial, followed by a period: 

    Enter a first and last name: Lloyd Fosdick 
    Fosdick, L. 

    The user's input may contain extra spaces before the first name, between the first and last names
    and after the last name. 
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a first and last name: ");

    int ch; 
    int last_name; 
    int initial;
    ch = getchar();
    if (ch == ' '); 
    {
        do
        {
            last_name = getchar(); 
            putchar(last_name); 
        } while (last_name != '\n');  
    } 
    
}