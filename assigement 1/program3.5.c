#include<stdio.h>

typedef int BOOL; 

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char Cvalue)
{
    if(Cvalue == 'A' || Cvalue == 'E' || Cvalue == 'I' || Cvalue == 'O' || Cvalue == 'U' ||
       Cvalue == 'a' || Cvalue == 'e' || Cvalue == 'i' || Cvalue == 'o' || Cvalue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char Cvalue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &Cvalue);

    bRet = ChkVowel(Cvalue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
