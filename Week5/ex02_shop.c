#include <stdio.h>
int main()
{
    int itemNumber;
    float totalPrice;
    float HealtotalPrice = 50;
    float ManatotalPrice = 80;
    float IronSwordtotalPrice = 500;
    float LeatherArmortotalPrice = 300;
    float gold = 1000;

    printf("===ITEM SHOP===\n");

    printf("Gold: %.2f\n", gold);

    printf("1. Health Potion - 50 Gold\n");
    printf("2. Mana Potion - 80 Gold\n");
    printf("3. Iron Sword - 500 Gold\n");
    printf("4. Leather Armor - 300 Gold\n");
    printf("5. Exit\n");

    printf("Enter item number (1-5): ");
    scanf("%d", &itemNumber);

    typedef enum
    {
        HealthPotion = 1,
        ManaPotion = 2,
        IronSword = 3,
        LeatherArmor = 4,
        Exit = 5
    } Item;

    while (itemNumber < 1 || itemNumber > 5)
    {
        printf("Invalid item number. Please enter a number between 1 and 5: ");
        scanf("%d", &itemNumber);
    }

    {
        switch (itemNumber)
        {
        case HealthPotion:
            if (gold < 50)
            {
                printf("You do not have enough gold to purchase a Health Potion.\n");
                HealtotalPrice = 50;
            }
            else
            {
                printf("You have purchased a Health Potion for %.2f Gold.\n", HealtotalPrice);
                printf("You have %.2f Gold left.\n", gold - 50);
                printf("You have gained 50 Health Points.\n");
            }
            break;
        case ManaPotion:
            if (gold < 80)
            {
                printf("You do not have enough gold to purchase a Mana Potion.\n");
                ManatotalPrice = 80;
            }
            else
            {
                printf("You have purchased a Mana Potion for %.2f Gold.\n", ManatotalPrice);
                printf("You have %.2f Gold left.\n", gold - 80);
            }
            break;
        case IronSword:
            if (gold < 500)
            {
                printf("You do not have enough gold to purchase an Iron Sword.\n");
                IronSwordtotalPrice = 500;
            }
            else
            {
                printf("You have purchased an Iron Sword for %.2f Gold.\n", IronSwordtotalPrice);
                printf("You have %.2f Gold left.\n", gold - 500);
            }
            break;
        case LeatherArmor:
            if (gold < 300)
            {
                printf("You do not have enough gold to purchase a Leather Armor.\n");
                LeatherArmortotalPrice = 300;
            }
            else
            {
                printf("You have purchased a Leather Armor for %.2f Gold.\n", LeatherArmortotalPrice);
                printf("You have %.2f Gold left.\n", gold - 300);
            }
            break;
        case Exit:
            printf("Exiting the shop.\n");
            break;
        default:
            printf("Invalid item number.\n");
        }

        return 0;
    }
}