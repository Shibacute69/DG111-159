#include <stdio.h>

int main()
{
    int maxHp = 100;
    int damage = 90;
    _Bool ispoisoned = 0;
    int attackcount = 5;

    printf("Max HP: %d\n", maxHp);
    printf("DamageTaken: %d\n", damage);
    printf("Is Poisoned: %d\n", ispoisoned);
    printf("Attack Count: %d\n", attackcount);

    int Hp = maxHp - damage;
    printf("Current HP: %d\n", Hp);
    if (Hp <= 0)
    {
        printf("Character is dead\n");
    }
    else if ((float)Hp / maxHp < 0.25)
    {
        printf("Critical condition\n");
    }
    else
    {
        printf("Character is alive\n");
    }

    if (ispoisoned == 1)
    {
        printf("poisoned\n");
    }

    if (attackcount % 5 == 0)
    {
        printf("Ultimate\n");
    }

    return 0;
}