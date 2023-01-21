//Input :751
//Output : 3

//Input : 7515 
//output : 4

#include<stdio.h>

int SumDigits(int iNo)
{
   int iDigit=0;
    int iCnt = 0;
    int iSum = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10 ;
        iSum = iSum + iDigit;

    }

    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Number of digits are : %d \n",iRet);

    return 0;
}