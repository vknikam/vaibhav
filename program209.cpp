#include<iostream>
using namespace std;

// Input : 7985674

// Output :     4 occurs 1 times
//              5 occurs 1 times
//              6 occurs 1 times
//              7 occurs 2 times
//              8 occurs 1 times
//              9 occurs 1 times

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }
        void MaxFrequency()
        {
            int iTemp = iNo;
            int iDigit = 0;
            int Frequency[10] = {0};
            
            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }
            int iMaxFreq = 0;
            int iMaxDigit = 0;
            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt]>iMaxFreq)
                {
                    iMaxFreq = Frequency[iCnt];
                    iMaxDigit = iCnt;
                    
                }
            }
            cout<<"Maximum times occured digit is "<<iMaxDigit<<" and its frequency is "<<iMaxFreq<<"\n";
        }
};

int main()
{   
    int iValue = 0;
    int iRet = 0;

    cout<<"Please enter number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.MaxFrequency();
    
    return 0;
}