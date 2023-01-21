#include<stdio.h>
#include<stdbool.h>

int Check(char *str,char Ch)
{
    

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            break;
        }
        str++;
    }

    if(*str=='\0')
    {
        return false;
    }
    else 
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cLetter = '\0';
    bool bRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter character\n");
    scanf(" %c",&cLetter);

    bRet = Check(Arr,cLetter);

    if(bRet == true)
    {
        printf("Charcter is persent in the string\n");
    }
    else
    {
        printf("Charcter is not present is the string");
    }
    return 0;
}