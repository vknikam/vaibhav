#include<stdio.h>

int FactorsR(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo/2))
    {
        if((iNo % iCnt)== 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        FactorsR(iNo);
    }
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbetr \n");
    scanf("%d",&iValue);

    iRet =FactorsR(iValue);

    printf("sum of Factorial is %d",iRet);

    return 0;
}