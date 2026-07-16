#include <stdio.h>
#include <math.h>
int main()
{
    int PlayerAttack;
    int EnemyDefense;
    int HitNumber;

    printf("Player Attack: ");
    scanf("%d", &PlayerAttack);
    printf("Enemy Defense: ");
    scanf("%d", &EnemyDefense);
    printf("Hit Number: ");
    scanf("%d", &HitNumber);

    int baseDamage = PlayerAttack - EnemyDefense;

    if (HitNumber % 5 == 0)
    {
        baseDamage = (int)ceil((float)baseDamage * 1.5f);
        printf("Critical Damage: %d\n", baseDamage);
    }
    else
    {
        printf("Damage: %d(Normal)\n", baseDamage);
    }

    return 0;
}