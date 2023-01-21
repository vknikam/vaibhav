#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0;iSize > iCnt;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    ptr =(int *)malloc(sizeof(int)*iLength);

    printf("Enter the elemem=nts: \n");

    for(i= 0;i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr,iLength);

    printf("Maximun number is: %d\n",iRet);

    free(ptr);

    return 0;


}