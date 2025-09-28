#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 7)
        {
            break;    // exits the loop at that value of if
            continue; // skips this value and continue to next (skips this iteration now)
        }
        printf("%d\n", i);
    }

    return 0;
}
