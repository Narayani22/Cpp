#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iAdd= 0;

    iAdd = iValue1 + iValue2;

    return iAdd;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;

    cout<<"Enter first number : \n";    //prinntf("Enter first number :\n");
    cin>>iNo1;                          //scanf("%d",&iNo1);
    
    cout<<"Enter second number : \n";    //prinntf("Enter Second number :\n");
    cin>>iNo2;

    iRet = Addition(iNo1,iNo2);

    cout<<"Addition is : "<<iRet<<"\n";
    return 0;
}