#include <stdio.h>

int main()
{
    int m1, m2, m3;
    int t;
    printf("Enter subj 1 marks :");
    scanf("%d", &m1);
    printf("Enter subj 2 marks :");
    scanf("%d", &m2);
    printf("Enter subj 3 marks :");
    scanf("%d", &m3);

    printf("Your marks are %d , %d and %d in subj1, subj2 and subj3 respectively\n", m1, m2, m3);
    // My method
    // t = m1 + m2 + m3;
    // if (t >= 120 && m1 >= 33 && m2 >= 33 && m3 >= 33)
    // {
    //     printf("Your passed\n");
    // }
    // else
    // {
    //     printf("Your failed\n");
    // }

    // Method 2
    // if (m1 < 33 || m2 < 33 || m3 < 33)
    // {
    //     printf("Your failed due to less marks in individual subjects");
    // }
    // else if ((m1 + m2 + m3) / 3 < 40)
    // {
    //     printf("You are failed due to less percentage\n");
    // }
    // else
    // {
    //     printf("You are passed\n");
    // }

    return 0;
}