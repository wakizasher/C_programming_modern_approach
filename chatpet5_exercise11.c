/*
    Write a program that asks the user for a two-digit number, then prints the English word, 
    for the number: 
    Enter a two-digit number: 45 
    You entered the number forty-five.
    Hint: Break the number into two digits. Use one switch statement to print the word for the
    first digit ("twenty", "thirty", and so forth). Use a second switch statement to print the 
    word for the second digit. Don't forget that the numbers between 11 and 19 require special treatment.
*/

#include <stdio.h>

int main(void)
{
    int number; 
    printf("Enter a two-digit number: ");
    scanf("%d",&number); 
    int first_number = number / 10; 
    int second_number = number % 10; 

    if (number >= 10 && number <= 19)
    {
        switch (number)
        {
            case 10: printf("ten\n"); break; 
            case 11: printf("eleven\n"); break; 
            case 12: printf("twelve\n"); break; 
            case 13: printf("thirteen\n"); break; 
            case 14: printf("fourteen\n"); break; 
            case 15: printf("fifteen\n"); break;
            case 16: printf("sixteen\n"); break; 
            case 17: printf("seventeen\n"); break; 
            case 18: printf("eighteen\n"); break; 
            case 19: printf("nineteen\n"); break; 
        }
    }
    else 
    {
        switch (first_number)
        {
            case 2: printf("twenty"); break; 
            case 3: printf("thirty"); break; 
            case 4: printf("forty"); break; 
            case 5: printf("fifty"); break; 
            case 6: printf("sixty"); break; 
            case 7: printf("seventy"); break;
            case 8: printf("eighty"); break;
            case 9: printf("ninety"); break; 
        }
        switch (second_number)
        {
            case 1: printf("one"); break; 
            case 2: printf("two"); break; 
            case 3: printf("three"); break; 
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break; 
        }
        printf("\n");
    }
    return 0;
}