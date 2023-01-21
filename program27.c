#include<stdio.h>

int Summation()
{
    

    int iSum=0;

    iSum = iSum + 1;     //      for(iCnt=1; iCnt<=5;iCnt++)
    iSum = iSum + 2;      //     {
    iSum = iSum + 3;      //     iSum = iSum + iCnt;
    iSum = iSum + 4;     //       }}
    iSum = iSum + 5;     //

    return iSum;
}

int main()
{
    int iNo=0;
    int iRet=0;

    iRet= Summation();

    printf("Summestion is :%d\n",iRet);
    return 0;
}