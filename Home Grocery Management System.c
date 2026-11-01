#include <stdio.h>

int main()
{
    int choice, quantity;
    float price, total = 0;

    printf("\n  === Jalali HOME GROCERY MANAGEMENT SYSTEM ===\n");

    while (1)
    {
        printf("\n   === GROCERY MENU ===\n\n");
        printf("1. Rice       : Rs. 300 per kg\n");
        printf("2. Sugar      : Rs. 150 per kg\n");
        printf("3. Flour      : Rs. 120 per kg\n");
        printf("4. Milk       : Rs. 220 per liter\n");
        printf("5. Oil        : Rs. 550 per liter\n");
        printf("6. View Total Bill\n");
        printf("7. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                price = 300;
                break;

            case 2:
                price = 150;
                break;

            case 3:
                price = 220;
                break;

            case 4:
                price = 550;
                break;

            case 5:
                price = 120;
                break;

            case 6:
                printf("\nTotal Grocery Bill : Rs. %.2f\n", total);
                continue;

            case 7:
                printf("\nThank you for shopping !\n");
                printf("Final Bill : Rs. %.2f\n", total);
                return 0;

            default:
                printf("\n Invalid choice! Try again.\n");
                continue;
        }

        printf("Enter quantity : ");
        scanf("%d", &quantity);

        if (quantity > 0)
        {
            total = total + (price * quantity);
            printf("Item added successfully !\n");
            printf("Current Total : Rs. %.2f\n", total);
        }
        else
        {
            printf("Invalid quantity !\n");
        }
    }

    return 0;
}
