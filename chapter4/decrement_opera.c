#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = n; i; --i)
    {
        printf("%d\n", i);
    }
    return 0;
}