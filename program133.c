#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Please enter your full name\n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);

    printf("Your Name is: %s\n",Arr);
    return 0;
}