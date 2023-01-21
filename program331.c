#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CountOnBits(UINT iNo)
{
    int iCnt = 0;
    int Digit = 0;

    while (iNo != 0)
    {
        Digit =iNo %2;
        iCnt = iCnt + Digit;
        iNo = iNo/2;
    }
    return iCnt;
}

int main()
{
    UINT Value = 11;
    bool iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&Value);
    
    iRet = CountOnBits(Value);

    printf("Number of bits which are ON are : %d\n",iRet);

    return 0;
}