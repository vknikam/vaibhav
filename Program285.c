#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}


void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

bool CheckPerfect(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    int iTemp = iNo;

    for(iCnt = 1; iCnt <= (iNo/ 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return (iSum == iTemp);
}

void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First->data) == true)
        {
            printf("%d is a perfect number \n",First->data);
        }
        First = First -> next;
    }
}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head,101);
    InsertLast(&Head,28);
    InsertLast(&Head,496);
    InsertLast(&Head,141);
    InsertLast(&Head,151);
    InsertLast(&Head,8128);
    InsertLast(&Head,171);

    Display(Head);

    DisplayPerfect(Head);


    return 0;
}
