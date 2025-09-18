#include <stdio.h>

int main()
{
    // checking adding and commiting
    int k = 3.0 / 9;
    printf("value of k = %d", k); /*value of k is actually 0.333 but since k is int,
    it cannot store floats & 0.333 is demoted to 0 */
    return 0;
}