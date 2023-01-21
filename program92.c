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

    for(iCnt=iValue;iCnt >0; iCnt--)
    {
        printf("%d \n",iCnt);
    }

}
int main()
{
    int iNo = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}