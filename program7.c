//multiplication of two numbers
#include<stdio.h>


int Multiplication(int iValue1,int iValue2)
{
    int iRet = 0;
    iRet = iValue1 * iValue2;
     return iRet;
}
int main()
{   
    int iNo1 = 0;
    int iNo2 = 0;
    int iMult = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number :\n");
    scanf("%d",&iNo2);

    printf("print first is : %d\n",iNo1);
    printf("print second is : %d\n",iNo2);

    iMult = Multiplication(iNo1,iNo2);

    printf("\nMultiplication is : %d\n",iMult);

    return 0;
} 