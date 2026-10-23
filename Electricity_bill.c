
#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter electricity units consumed : ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid units entered! \n");
    }
    else if (units <= 100)
    {
        bill = units * 5.0;
        printf("Electricity Bill: Rs. %.2f \n", bill);
    }
    else if (units <= 200)
    {
        bill = (100 * 5.0) + ((units - 100) * 8.0);
        printf("Electricity Bill : %.2f\n", bill);
    }
    else
    {
        bill = (100 * 5.0) + (100 * 8.0)
               + ((units - 200) * 10.0);
        printf("Electricity Bill:  %.2f\n", bill);
    }

    return 0;
}
