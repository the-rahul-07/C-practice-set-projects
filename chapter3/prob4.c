#include <stdio.h>

int main()
{
    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("Its leap year\n");
    }
    else
    {
        printf("Its not a leap year\n");
    }
    return 0;
}