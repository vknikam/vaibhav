#include<stdio.h>

int Display(int Arr[], int iSize)
{
    static int iCnt =0;
    static int iSum = 0;

    if(iCnt < iSize)
    {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        Display(Arr,iSize);
    }
   return iSum; 
}

int main()
{
    int Arr[5]= {10,20,30,40,50};
    int iRet = 0;

    iRet =Display(Arr,5);

    printf("sum of element is %d",iRet);
    return 0;
}