#include<stdio.h>

int AdditionI(int iNo)
{
    int iCnt = iNo;
    int  Sum = 0;

    while(iCnt > 0)
    {
        Sum = Sum + iCnt;
        iCnt--;
    }
return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbetr \n");
    scanf("%d",&iValue);

    iRet = AdditionI(iValue);

    printf("addtion of 1 to %d is %d",iValue,iRet);
    
    return 0;
}