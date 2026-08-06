#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
        printf("%d\n", i);
    }
    printf("Sum: %d\n", sum);

    int i = 1;
    sum = 0;
    while (i <= 10)

    {

        sum += i;
        printf("%d\n", i);
        i++;
    }
    printf("Sum: %d\n", sum);

    i = 1;
    sum = 0;
    do
    {
        sum += i;
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    printf("Sum: %d\n", sum);
    return 0;
}
