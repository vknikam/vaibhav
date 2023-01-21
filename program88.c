//4
// * * * *
#include<stdio.h>

void Display(int iValue)
{
    int iCnt =0;

    for(iCnt=1;iCnt <=iValue; iCnt++)
    {
        printf("* \t");
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