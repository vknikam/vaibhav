//4
// * * * *
#include<stdio.h>

void Display(int iValue)
{
    int iCnt =0;

    if(iValue<0)
    {
        iValue = -iValue;
    }

    for(iCnt=1;iCnt <=iValue; iCnt++)
    {
        printf("%d \t * \t",iCnt);
    }
    printf("\n");

}
int main()
{
    int iNo = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}