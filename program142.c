#include<stdio.h>

int CountFrequency(char *str,char Ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cLetter = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter character\n");
    scanf(" %c",&cLetter);

    iRet = CountFrequency(Arr,cLetter);

    printf("Frequency of a is : %d\n",iRet);

    return 0;
}