/*
    The value of the mathematicl constant e can be expressed as an 
    infinite series: 

    e = 1 + 1/1! + 1/2! + 1/3! + ... 

    Write a program that approximates e by computing the value of 

    1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

    where n is an integer entered by the user.   
*/

#include <stdio.h>

int main(void)
{
    int n; 
    double e = 1.0;
    int fact = 1;  
    printf("Enter the value for n: "); 
    scanf("%d", &n); 

    for(int i = 1; i <= n; i++)
    {
        fact *= i; 
        e += 1.0/fact; 
        //e += 1.0/(fact*i);
    }  
    printf("%f", e);
}