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

    printf("=== Personal Data ===\n");
    printf("┌────────────────────────┐\n ");
    printf("│Name: %-15.7s\t│\n", name);
    printf("│Age: %-17d\t|\n", age);
    printf("│GPA: %-17.7f\t|\n", gpa);
    printf("│Favorite Subject: %-4.7s\t|\n", favoriteSubject);
    printf("└────────────────────────┘\n ");
    return 0;
}