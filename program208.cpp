#include<iostream>
using namespace std;
/*Input : 7985674
Output : 4 occours 1 times
         5 occours 1 times
         6 occours 1 times
         7 occours 1 times
         8 occours 1 times
         9 occours 1 times
*/ 

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

        void DisplayFrequency()
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

            for(int iCnt = 0; iCnt < 10; iCnt++)
            {
                if(Frequency[iCnt]>0)
                {
                    cout<<iCnt<<"occors at "<<Frequency[iCnt]<<"times"<<"\n";
                }
            }
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    

    return 0;
}