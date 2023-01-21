#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    return (iReverse == iData);
}
int Reverse(int iNo)
{
    int iDigit = 0, iRev =0;
    
  

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0; 
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d is pallindrome number \n",iValue);
    }
    else 
    {
       printf("%d is not pallindrome number \n",iValue);
    }

    return 0;
}