#include <stdio.h>

int main()
{
    int income;
    float tax = 0;
    printf("Enter you income to calculated tax : ");
    scanf("%d", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    else if (income > 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("The total amount of tax you need to pay is %f", tax);
    return 0;
}