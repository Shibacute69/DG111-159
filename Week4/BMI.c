#include <stdio.h>
int main()
{
    int weight;
    int height;
    float bmi;
    float heightInMeter;

    printf("Enter your weight (kg): ");
    scanf("%d", &weight);

    printf("Enter your height (cm): ");
    scanf("%d", &height);

    heightInMeter = height / 100.0;

    bmi = weight / (heightInMeter * heightInMeter);

    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5)
    {
        printf("You are underweight.\n");
    }
    else if (18.5 < bmi && bmi < 25.0)
    {
        printf("You have a normal weight.\n");
    }
    else if (25.0 < bmi && bmi < 30.0)
    {
        printf("You are overweight.\n");
    }
    else if (30.0 < bmi)
    {
        printf("You are obese.\n");
    }

    return 0;
}