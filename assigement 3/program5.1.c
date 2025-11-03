#include<stdio.h>
void CheckEvenOdd(int num)
{
    int iRem = 0;

    iRem = num%2;

    if(iRem == 0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is Odd Number");
    }
}

int main()
{

int iValue = 0;

printf("Enter Number: ");
scanf("%d",&iValue);

CheckEvenOdd(iValue);


return 0;
}