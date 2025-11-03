#include <stdio.h>

int sum_of_even_factors(int number)
{
    int i = 0;
    int iSum = 0;

    if (number <= 0)
    {
        return 0;
    }

    for (i = 1; i < number; i++)
    {
        if (number % i == 0 && i % 2 == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("Sum of even factors (excluding number) is : %d\n", sum_of_even_factors(number));

    return 0;
}
