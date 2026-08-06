#include <stdio.h>
int main()
{
    int row = 0;
    int col = 0;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    int n = 5;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * row - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = 1; row <= n - 1; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("  ");
        }
        for (int k = 1; k <= 2 * (n - row) - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}