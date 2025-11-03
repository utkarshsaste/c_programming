#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
            iEvenFact = iEvenFact * i;
        else
            iOddFact = iOddFact * i;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}
