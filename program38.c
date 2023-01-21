#include<stdio.h>

void DisplayTable(int iValue)
{

   int iCnt = 0;

   printf("------------------------\n");
   printf("Table of %d is:\n",iValue);
    printf("------------------------\n");
   /* iAns = iValue *1;
    iAns = iValue *2;
    iAns = iValue *3;
    iAns = iValue *4;
    iAns = iValue *5;
    iAns = iValue *6;
    iAns = iValue *7;
    iAns = iValue *8;
    iAns = iValue *9;
    iAns = iValue *10;
*/
    for(iCnt=1;iCnt <= 10; iCnt++)
    {
        printf("%d\n",iValue * iCnt);
    }
    printf("------------------------\n");
}

int main()
{

    int iNo = 0 ;

    printf("Enter the number: \n");
    scanf("%d",&iNo);

    DisplayTable(iNo);

    return 0;
}