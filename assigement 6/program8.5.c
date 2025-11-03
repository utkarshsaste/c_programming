#include<stdio.h>

void TableRev(int iNo)
{
    if(iNo < 0)
        iNo = -iNo;

    for(int iCnt = 10; iCnt >= 1; iCnt--)
        printf("%d\t", iNo * iCnt);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}
