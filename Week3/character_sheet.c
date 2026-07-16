#include <stdio.h>
int main()
{
    char name[30] = "DRAGONKNIGHT";
    int MaxHp = 1;
    int ATK = 1;
    int DEF = 1;
    int LEVEL = 1;

    printf("╔══════════════════════════════╗\n");
    printf("║ Name: %-19s\t║ \n", name);
    printf("╠══════════════════════════════╣\n");
    printf("║ LEVEL: %-19d\t║\n", LEVEL);
    printf("║ HP: %-19d\t║\n", MaxHp);
    printf("║ ATK: %-19d\t║\n", ATK);
    printf("║ DEF: %-19d\t║\n", DEF);
    printf("╠══════════════════════════════╣\n");
    printf("║ HP BAR:█████████] 100%║\n");
    printf("║ Power Score: %-13d║\n", ATK * 2 + DEF + MaxHp / 10);
    printf("╚══════════════════════════════╝\n ");
    return 0;
}