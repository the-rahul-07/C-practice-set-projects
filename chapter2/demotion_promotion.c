#include <stdio.h>

int main()
{
    // in c type compatibility is crucial
    int a = 9.6;
    printf("the value of a is %d\n", a); // demotion to 9 coz a cannot hold 9.6(float value)
    float b = 9;
    printf("the value of b is %f", b); // promotion to 9.0 coz b cannot hot interger value so it is promoted to 9.0
    return 0;
}