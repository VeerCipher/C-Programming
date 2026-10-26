#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks (0-100) : ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks!\n");
    }
    else if (marks >= 50)
    {
        printf("Congratulations! You passed \n");
    }
    else
    {
        printf("Sorry! You failed");
    }

    return 0;
}
