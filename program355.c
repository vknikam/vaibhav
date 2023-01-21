#include<stdio.h>

void FactorsI(int iNo)
{
    int iCnt = 1;

    for(iCnt = 1;iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            printf("%d \t",iCnt);
        }
    }
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbetr \n");
    scanf("%d",&iValue);

    FactorsI(iValue);

    return 0;
}