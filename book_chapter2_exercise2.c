#include <stdio.h>
int main(void)
{
    int item_nr; 
    float unit_price; 
    char date[10];

    printf("Enter item number: "); 
    scanf("%d", &item_nr); 
    printf("Enter unit price: ");
    scanf("%f", &unit_price); 
    printf("Enter purchase date (mm/dd/yyyy): "); 
    scanf("%s", date); 

    printf("Item %i\n", item_nr); 
    printf("Unit Price %.2f\n", unit_price); 
    printf("Purchase date %s\n", date);
    return 0;
}

/*
Write a program that formats product infromation enterd by the user.3 
A session with the program should look like this: 
Enter item numner: 584
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
*/