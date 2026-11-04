#include <stdio.h>

int main()
{
    int choice, quantity;
    float price, total;

    printf(" \n === RESTAURANT MENU ===\n\n");
    printf("1. Burger  - Rs. 350\n");
    printf("2. Pizza   - Rs. 800\n");
    printf("3. Fries   - Rs. 200\n");
    printf("4. Sandwich - Rs. 250\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            price = 350;
            break;

        case 2:
            price = 800;
            break;

        case 3:
            price = 200;
            break;

        case 4:
            price = 250;
            break;

        default:
            printf("Invalid choice!");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if(quantity <= 0)
    {
        printf("Invalid quantity!");
        return 0;
    }

    total = price * quantity;

    printf("\n===== YOUR BILL =====\n\n");
    printf("Total Amount: Rs. %.2f\n", total);

    return 0;
}
