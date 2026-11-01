#include <stdio.h>
int main()
{
    int choice;
    int id;
    char name[50];
    float salary;

    printf("\n === Jalali EMPLOYEE MANAGEMENT SYSTEM ===\n");

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    while (1)
    {
        printf("\n\n   === MENU ===\n\n");
        printf("1. Display Employee Details\n");
        printf("2. Calculate Annual Salary\n");
        printf("3. Check Salary Category\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\n\n  === EMPLOYEE DETAILS ===\n\n");
                printf("Employee ID     : %d\n", id);
                printf("Employee Name   : %s\n", name);
                printf("Monthly Salary  : %.2f\n", salary);
                break;

            case 2:
                printf("\nAnnual Salary: %.2f\n", salary * 12);
                break;

            case 3:
                if (salary >= 100000)
                    printf("\nCategory: High Salary\n");
                else if (salary >= 50000)
                    printf("\nCategory: Medium Salary\n");
                else
                    printf("\nCategory: Entry Level Salary\n");
                break;

            case 4:
                printf("\nThank you for using Jalali system!\n");
                return 0;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }
    }

    return 0;
}
