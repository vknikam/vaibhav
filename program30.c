#include<stdio.h>

int Factorial(int iValue)
{
    
    int iCnt=0;
    int iFact=1;
//          1       2       3
    for(iCnt=1; iCnt<=iValue;iCnt++)
        {
            iFact = iFact * iCnt; //4
        }
    

    return iFact;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("enter the Value: \n");
    scanf("%d",&iNo);

    iRet= Factorial(iNo);

    printf("Factorial %d is :%d\n",iNo,iRet);
    
    return 0;
}