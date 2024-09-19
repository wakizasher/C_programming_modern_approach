/*
    Write a program that counts the number of vowels (a,e,i,o, and u) in a sentence: 

    Enter a sentece: And that's the way it is 
    Your sentece contains 6 vowels 
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a sentence: ");

    int ch; 
    int counter;
    do
    {
        ch = getchar(); 
        putchar(ch); 

        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' ||
            ch == 'i'|| ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
            {
               counter++;  
            }
    } while (ch != '\n');

    printf("Your sentence contains %d vowels", counter); 
    
}