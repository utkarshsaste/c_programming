#include <stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0, iNum = 1;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iNum = iNum * iCnt;
        }
    }

    return iNum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);
    printf("Multiplication of factors is: %d\n", iRet);

    return 0;
}
