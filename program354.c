#include<stdio.h>

int factorial(int iNo)
{
    static int iCnt = 1;
    static int  Sum = 1;

    if(iCnt <= iNo)
    {
        Sum = Sum * iCnt;
        iCnt++;
        factorial(iNo);
    }
return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the numbetr \n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);

    printf("Factorial of %d is %d",iValue,iRet);
    
    return 0;
}