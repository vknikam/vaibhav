#include<stdio.h>
void DisplayI()
{
    int iCnt = 1;  // auto

    printf(" \n");

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 1;  

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    } 
}

int main()
{
    DisplayI();
    DisplayR();
    return 0;
}