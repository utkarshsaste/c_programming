#include<stdio.h>

void print_Factors(int number)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < number; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{

    int number;

    printf("Enter number : \n");
    scanf("%d",&number);

    print_Factors(number);

    return 0;
}