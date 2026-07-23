#include <stdio.h>

int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 80)
    {
        printf("Your grade is A\n");
        printf("4.0");
        printf("Pass");
    }
    else if (grade >= 75)
    {
        printf("Your grade is B+\n");
        printf("3.5");
        printf("Pass");
    }
    else if (grade >= 70)
    {
        printf("Your grade is B\n");
        printf("3.0");
        printf("Pass");
    }
    else if (grade >= 65)
    {
        printf("Your grade is C+\n");
        printf("2.5");
        printf("Pass");
    }
    else if (grade >= 60)
    {
        printf("Your grade is C\n");
        printf("2.0");
        printf("Pass");
    }
    else if (grade >= 50)
    {
        printf("Your grade is D\n");
        printf("1.0");
        printf("Pass");
    }
    else
    {
        printf("Your grade is F\n");
        printf("0.0");
        printf("Fail");
    }

    return 0;
}