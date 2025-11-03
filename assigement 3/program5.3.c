#include<stdio.h>
void CheckLeapYear(int Year)

{
    int iNum = 0;

    iNum = Year % 4;

    if(iNum == 0)
    {
        printf("It is Leap Year");
    }
    else
    {
        printf("it is not leap Year");
    }
}

int main()
{
    int yr;
    printf("Enter Year: ");
    scanf("%d",&yr);
    CheckLeapYear(yr);

    return 0;
}