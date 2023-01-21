#include<stdio.h>

int AdditionR(int iNo)
{
    static int iCnt = 0;
    static int  Sum = 0;

    if(iCnt <= iNo)
    {
        Sum = Sum + iCnt;
        iCnt++;
        AdditionR(iNo);
    }
return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbetr \n");
    scanf("%d",&iValue);

    iRet = AdditionR(iValue);

    printf("addtion of 1 to %d is %d",iValue,iRet);
    
    return 0;
}