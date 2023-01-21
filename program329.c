#include<stdio.h>

typedef unsigned int UINT;
int CountOnBits(UINT iNo)
{
    int iCnt = 0;
    int Digit = 0;

    while (iNo != 0)
    {
        Digit =iNo %2;

        if(Digit == 1)
        {
            iCnt++;
        }
        iNo = iNo/2;
    }
    return iCnt;
}

int main()
{
    UINT Value = 11;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&Value);
    
    iRet = CountOnBits(Value);

    printf("Number of bits which are ON are : %d\n",iRet);

    return 0;
}