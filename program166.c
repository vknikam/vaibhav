#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{`
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));   
    newn -> data = No;
    newn
}

int main()
{
   // struct node *Head = NULL;

    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = 11;
    newn->next = NULL;

    printf("%d\n",newn->data);
    printf("Size of structure %d\n",sizeof(NODE));

    return 0;
}