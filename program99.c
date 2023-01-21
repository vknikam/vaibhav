//4
// * * * *
#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i =0;
    int j = 0;



    for(i=1;i<=iRow;i++)
    {
       for(j=1;j <=iCol; j++)
       {
          printf("* \t");
       }
     printf("\n");
    }

}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter Number row : \n");
    scanf("%d",&iNo1);

    printf("Enter Number column : \n");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}