////////////////////////////////////////////////////////////////////////////////////
// Accept number from user and check whether it is divisible by 5 or not.
// Input : 23
// Output : 23 is not divisible by 5
////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//Alogorithm
////////////////////////////////////////////////////////////////////////////

/*
    START
        Accept number from user as NO
        Divide that no by 5 and check the value of remainder
        If the value is 0
            Then disply as NO is divisible by 5
        Otherwise
            display as NO is not divisible by 5
        
    END 
*/

////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name    : DivisibleByFive
//  Description      : To check whether input is divible by 5 
//  Input            :
//  Output           :
//  Author           :
//  Date             :
//
////////////////////////////////////////////////////////////////////////////
int DivisibleByFive(int iNo1)
{
    int iAns = 0;
    iAns = iNo1 % 5;

    if(iAns != 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
////////////////////////////////////////////////////////////////////////////
//Entry point of the application
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DivisibleByFive(iValue);

    if(iRet != 1)
    {
        printf(" %d number is divisible by 5 \n",iValue);
    }
    else
    {
        printf(" %d Number is not divisible by 5 \n",iValue);
    }

  return 0;
}