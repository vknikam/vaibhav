#include<stdio.h>

int Summation(int iValue)
{
    
    int iCnt = 0;
    int iSum= 0;
//          1       2       3
    for(iCnt=1; iCnt<=iValue;iCnt++)
        {
            iSum = iSum + iCnt; //4
        }
    

    return iSum;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("enter the Value: \n");
    scanf("%d",&iNo);

    iRet= Summation(iNo);

    printf("Summestion is :%d\n",iRet);
    
    return 0;
}