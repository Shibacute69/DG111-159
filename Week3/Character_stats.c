#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char name[30];
    int MaxHp;
    int ATK;
    int DEF;
    int LEVEL;

    printf("=== CREATE CHARACTER ===\n");
    printf("Character name: ");
    scanf("%29s", name);
    printf("Max HP: ");
    scanf("%d", &MaxHp);
    printf("Attack Power: ");
    scanf("%d", &ATK);
    printf("Defense: ");
    scanf("%d", &DEF);
    printf("LEVEL: ");
    scanf("%d", &LEVEL);

    printf("=== Character Summary ==\n");
    printf("Name : %-18s\n", name);
    printf("Max HP : %-18d\n", MaxHp);
    printf("Attack Power : %-18d\n", ATK);
    printf("Defense : %-18d\n", DEF);
    printf("LEVEL : %-18d\n", LEVEL);

    return 0;
}