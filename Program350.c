#include<stdio.h>

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
    printf("Inside Main \n");
    DisplayR();

    printf("End of  Main \n");
    return 0;
}