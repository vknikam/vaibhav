#include<stdio.h>

void CountCapR(char *str)
{
    static int iCnt = 0;

    
    if(*str != '\0')
    {
        printf("%s",str);
        str++;
        CountCapR(str);
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string \n");
    scanf("%[^'\n]s",&iValue);

    Display(Arr);

    return 0;
}