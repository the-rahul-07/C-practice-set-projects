#include <stdio.h>

int main()
{
    // any non zero value in will be executed
    // only zero value will not be executed
    if (1)
    {
        printf("if is executed\n");
    }
    if (3455)
    {
        printf("if is executed\n");
    }
    if (2.98)
    {
        printf("this float if is also executed\n");
    }
    if ('n')
    {
        printf("this char if is also executed\n");
    }
    if (0)
    {
        printf("this if is not executed\n");
    }
    return 0;
}