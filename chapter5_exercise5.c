/*
    In one state, single residents are subject to the following income tax: 
    Income              Amount of tax 
    Not over $750       1% of income 
    $750-$2,250         $7.50 plus 2% of amount over $750 
    $2,250-$3,750       $37.50 plus 3% of amount over $2,250 
    $3,750-$5,250       $82.50 plus 4% of amount over $3,750
    $5,250-$7000        $142.50 plus 5% of amount over $5,250
    Over $7000          $230.00 plus 6% of amount over $7,000
    Write a program that asks the user to enter the amount of taxable income, 
    then display the tax due. 
*/

#include <stdio.h>

int main(void)
{
    double income; 
    printf("Please enter the amount of taxable income: "); 
    scanf("%lf", &income);

    if (income <= 750.00)
    {
        printf("%.2lf\n",income/100);
    }
    else if (income > 750.00 && income <= 2250.00)
    {
        printf("%.2lf\n", 7.50 + (income/100*2));
    }
    else if (income > 2250.00 && income <= 3750.00)
    {
        printf("%.2lf\n", 37.50 + (income/100*3)); 
    }
    else if (income > 3750.00  && income <= 5250.00)
    {
        printf("%.2lf\n", 82.50 + (income/100*4));
    }
    else if (income > 5250.00 && income <= 7000.00)
    {
        printf("%.2lf\n",142.50 + (income/100*5));
    }
    else if (income > 7000.00)
    {
        printf("%.2lf\n", 230.00 + (income/100*6));
    }
}