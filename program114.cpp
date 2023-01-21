#include<iostream>
using namespace std;

template<class T>
T Add(T Arr[], int iSize)
{
    int iCnt = 0;

    T iSum;


    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];    
    }
    return iSum;
}
int main()
{
    int Data[]= {10,20,30,40};
    int iRet = Add(Data,4);

    cout<<"Addtion of integers: "<<iRet<<"\n";
    

    double Datad[]= {10.2,20.7,30.9,40.1};

    double dRet = Add(Datad,4);
    cout<<"Addtion of doubles: "<<dRet<<"\n";



    return 0;
}