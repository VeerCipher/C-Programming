
#include <stdio.h>

int main()
{
    int numbers[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
    }

    printf("\nNumbers are:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
