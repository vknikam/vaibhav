#include<stdio.h>
#include<stdbool.h>


bool checkperfect(int iNo)
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
        checkperfect(iNo);
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = 0;
    
    printf("Enter the numbetr \n");
    scanf("%d",&iValue);

    bRet =checkperfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number \n",iValue);
    }
    else
    {
        printf("%d is not perfect number \n",iValue);
    }

    return 0;
}