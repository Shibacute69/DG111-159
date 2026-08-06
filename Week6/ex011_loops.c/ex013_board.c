#include <stdio.h>
int main()
{
    int row = 5;
    int col = 5;
    int count = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("+---+");
        }
        printf("\n");
        for (int j = 1; j <= col; j++)
        {
            printf("| %d |", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}