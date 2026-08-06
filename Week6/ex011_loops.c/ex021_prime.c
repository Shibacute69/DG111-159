#include <stdio.h>
int main()
{
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    int isPrime = 1; // Assume the number is prime

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}