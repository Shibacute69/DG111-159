#include <stdio.h>
int main()
{
    int expression = 10 / 3;
    printf("1. Expression: 10 / 3 = %d\n", expression);

    float expression2 = 10.0 / 3;
    printf("2. Expression: 10 / 3 = %.2f\n", expression2);

    float expression3 = (float)10 / 3;
    printf("3. Expression: 10 / 3 = %.2f\n", expression3);

    int expression4 = 10 % 3;
    printf("4. Expression: 10 %% 3 = %d\n", expression4);

    int expression5 = -7 % 3;
    printf("5. Expression: -7 %% 3 = %d\n", expression5);

    int expression6 = 7 % -3;
    printf("6. Expression: 7 %% -3 = %d\n", expression6);

    return 0;
}