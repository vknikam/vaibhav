#include<stdio.h>

void FactorsR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= (iNo/2))
    {
        if((iNo % iCnt)== 0)
        {
            printf("%d \t",iCnt);
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

    FactorsR(iValue);

    return 0;
}