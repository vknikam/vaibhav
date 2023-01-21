//4
// * * * *
#include<stdio.h>

void Display(int iValue)
{
    int iCnt =0;
    int ch ='A';

    if(iValue<0)
    {
        iValue = -iValue;
    }

    for(iCnt=1;iCnt <=iValue; iCnt++)
    {
        printf("%c \t",ch);
        ch++;
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