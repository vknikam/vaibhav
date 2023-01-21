#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;
        
        Numbers(int i)
        {
            iNo = i;
        }

        int Functional()
        {
            int iFact = 1;
            int iCnt = 0;

            for (iCnt = 1;iCnt <= iNo ; iCnt++)
            {
                iFact = iFact * iCnt;
            }
            return iFact;
        }
};

int main()
{
    int iValue;
    int iRet=0;
 
    cout<<"Enter number :  \n";
    cin>>iValue;

    Numbers obj(iValue);

    iRet= obj.Functional();
    cout<<"Factoriaal is: "<<iRet;

    return 0;
}