#include <stdio.h>

int main()
{
    int a = 3, b = 6, c = 9;
    printf("The value is %d\n", a * b / c + 7);
    printf("The value is %d\n", 3 * b / 2 * c + 7 * a);
    // 3*b/2*c + 7*a
    // 3*b/2*c + 21
    // 18/2*c + 21
    // 9*c + 21
    // 81 + 21
    // 102

    // OPERATOR PRECEDENCE
    // */% > +/- > =     ----> IN ABSENCE OF PARENTHESIS
    // OPERATOR ASSOCIATIVITY
    // */% FOLLOW LEFT TO RIGHT ASSOCI
    // ALWAYS SEE 1ST PERCEDENCE THEN ASSOCIATIVITY
    return 0;
}