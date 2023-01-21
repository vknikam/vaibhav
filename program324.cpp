#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class Queue
{
    public:
        struct node *First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void enqueue(int no);      // Insert
        int dequeue();              // Delete
        void Display();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue :: IsQueueEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue :: enqueue(int no)  // InsertLast
{
    struct node *newn = new node;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node * temp = First;

        while(temp-> next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;
    }
    
    iCount++;

    cout<<no<<" gets pushed in the Queue succesfully"<<"\n";
}

int Queue :: dequeue()          // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Queue is empty."<<"\n";
        return -1;
    }
    else 
    {
        int value = First -> data;
        struct node *temp = First;

        First = First ->next;
        delete temp;

        iCount--;

        return value;
    }
}

void Queue :: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of Queue are : "<<"\n";

        struct node *temp = First;
        while(temp != NULL)
        {
            cout<<"| "<<temp->data<<" |-> ";
            temp = temp -> next;
        }
        cout<<" NULL"<<"\n";
    }
}

int main()
{
    Queue obj;

    obj.enqueue(11);
    obj.enqueue(21);
    obj.enqueue(51);
    obj.enqueue(101);

    obj.Display();

    int iRet = obj.dequeue();
    cout<<"Poped element is : "<<iRet<<"\n";

    iRet = obj.dequeue();
    cout<<"Poped element is : "<<iRet<<"\n";

    obj.Display();
    
    return 0;
}