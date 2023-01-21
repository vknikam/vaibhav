#include<stdio.h>
void DisplayBinary(unsigned int iNo)
{
    int Digit = 0;

    while (iNo != 0)
    {
        Digit =iNo %2 ;
        printf("%d",Digit);
        iNo = iNo/2;
    }
    printf("\n");
}

int main()
{
    unsigned int Value = 11;

    printf("Value in decimal format : %d\n",Value);
    printf("Value in octal format : %o\n",Value);
    printf("Value in hexadecimal format : %x\n",Value);

    return 0;
}