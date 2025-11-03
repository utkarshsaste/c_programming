#include<stdio.h>

void CheckNumberType(int num)
{
    if(num>=0)
    {
        printf("positive number");
    }
    else
    {
        printf("negative number");
    }
    
}

int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    CheckNumberType(number);

    return 0;
}