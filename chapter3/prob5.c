#include <stdio.h>

int main()
{
    char c;
    printf("Enter the char to find its case : ");
    scanf("%c", &c);

    printf("The ascii value of %c is %d\n", c, c);

    // ASCII VALUE
    // a to z --> 97 to 122
    // A to Z --> 65 to 90
    if (c >= 97 && c <= 122)
    {
        printf("Character is lower case\n");
    }
    else if (c >= 65 && c <= 90)
    {
        printf("Character is not lower case\n");
    }
    return 0;
}