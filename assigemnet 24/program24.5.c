#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int temp = 0, sum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        temp = Arr[iCnt];
        sum = 0;

        while(temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        printf("%d ", sum);
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements ", iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);
    return 0;
}
