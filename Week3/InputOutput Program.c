#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char name[30];
    int age;
    float gpa;
    char favoriteSubject[30];

    printf("=== Enter Data ===\n");
    printf("Enter your name: ");
    scanf("%29s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    printf("Enter your favorite subject: ");
    scanf("%29s", favoriteSubject);
    printf(" \n");
    printf("=== Personal Data ==\n");
    printf("Name = %s\n", name);
    printf("Age = %d\n", age);
    printf("GPA = %.2f\n", gpa);
    printf("Favorite Subject = %s\n", favoriteSubject);

    return 0;
}