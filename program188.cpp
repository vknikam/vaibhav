#include<iostream>
using namespace std;

class Arithematic
{
    public:

    int Addition(int iValue1,int iValue2)
    {
     int iAdd = 0;
     iAdd= iValue1 +iValue2;
     return iAdd;
    }
};

int main()
{
    int iNo1 = 0;
    int iAns = 0;
    int iNo2 = 0;

    cout<<"Enter first number :\n";
    cin>>iNo1;

    cout<<"Enter second number:\n";
    cin>>iNo2;

    Arithematic obj;
    iAns=obj.Addition(iNo1,iNo2);
    cout<<"Addition is :"<<iAns<<"\n";
    return 0;
}