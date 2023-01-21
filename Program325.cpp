#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class Queue
{
    public:
        struct node<T> *First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void enqueue(T no);      // Insert
        T dequeue();              // Delete
        void Display();
};

template<class T>
Queue<T> :: Queue()
{
    First = NULL;
    iCount = 0;
}

template<class T>
bool Queue<T> :: IsQueueEmpty()
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

template<class T>
void Queue<T> :: enqueue(T no)  // InsertLast
{
    struct node<T> *newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node<T> * temp = First;

        while(temp-> next != NULL)
        {
            temp = temp->next;
        }
        temp -> next = newn;
    }
    
    iCount++;

    cout<<no<<" gets pushed in the Queue succesfully"<<"\n";
}

template<class T>
T Queue<T> :: dequeue()          // DeleteFirst
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Queue is empty."<<"\n";
        return -1;
    }
    else 
    {
        int value = First -> data;
        struct node<T> *temp = First;

        First = First ->next;
        delete temp;

        iCount--;

        return value;
    }
}

template<class T>
void Queue <T>:: Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty."<<"\n";
    }
    else 
    {
        cout<<"Elements of Queue are : "<<"\n";

        struct node<T> *temp = First;
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
    Queue <int>obj;

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
    
    Queue <double>obj1;

    obj1.enqueue(1.1);
    obj1.enqueue(2.1);
    obj1.enqueue(5.1);
    obj1.enqueue(10.1);

    obj1.Display();

    double iRet1 = obj1.dequeue();
    cout<<"Poped element is : "<<iRet1<<"\n";

    iRet1 = obj1.dequeue();
    cout<<"Poped element is : "<<iRet1<<"\n";

    obj1.Display();
 
    return 0;
}