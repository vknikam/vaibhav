/*

row = 4
col = 4

*/

#include<stdio.h>


void Display(int iRow, int iCol)
{
    int i = 0 , j = 0;

    if(iRow != iCol)
    {
        printf("Row number and column number are defferent\n");
        return;
    }
    

    for(i= 1; i<= iRow; i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(((j == 1)||(j==iCol)) ||((i == 1)||(i==iRow))||(i==j))
            {
                printf("$\t");
            }
            else
            {
              printf(" \t");
            }
            
        
        }
        printf("\n");
        
    }

}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%d",&iValue1);
    
    printf("Enter number of column \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
    return 0;
}