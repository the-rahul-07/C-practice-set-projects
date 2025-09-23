#include <stdio.h>

int main()
{
    int i = 0;
    printf("Natural numbers from 10 to 20:\n");
    while (i <= 20)
    {
        if (i > 10)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}