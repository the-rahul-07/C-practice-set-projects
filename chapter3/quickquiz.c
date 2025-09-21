#include <stdio.h>

int main()
{
    int m;
    printf("Enter the marks : ");
    scanf("%d", &m);

    if (m >= 90 && m <= 100)
    {
        printf("Your grade is A");
    }
    else if (m >= 80 && m < 90)
    {
        printf("Your grade is B");
    }
    else if (m >= 70 && m < 80)
    {
        printf("Your grade is C");
    }
    else if (m >= 60 && m < 70)
    {
        printf("Your grade is D");
    }
    else if (m >= 50 && m < 60)
    {
        printf("Your grade is E");
    }
    else if (m >= 40 && m < 50)
    {
        printf("Your grade is F");
    }
    else
    {
        printf("Your fail");
    }
    return 0;
}