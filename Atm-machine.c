#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    printf("\n === ATM MACHINE ===\n\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Your Balance: Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if(amount > 0)
            {
                balance += amount;
                printf("Deposit Successful!\n");
                printf("New Balance: Rs. %.2f\n", balance);
            }
            else
                printf("Invalid Amount!\n");
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if(amount > 0 && amount <= balance)
            {
                balance -= amount;
                printf("Withdrawal Successful!\n");
                printf("Remaining Balance: Rs. %.2f\n", balance);
            }
            else
                printf("Insufficient Balance or Invalid Amount!\n");
            break;

        case 4:
            printf("Thank you for using ATM!");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
