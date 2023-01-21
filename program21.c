#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    
    iCnt=1; 
    while(iCnt <= iValue);
    {
        printf(" marvellous :%d \n",iCnt);
        iCnt++;
    }

}

int main()
{
    int iNo = 0;

    printf("please enter we have to Display:  \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}