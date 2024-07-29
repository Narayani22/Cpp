#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T sum  = arr[0];
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iSum = AddN(arr,5);
    cout<<"Addition is : "<<iSum<<"\n";

    float fSum = AddN(brr,4);
    cout<<"Addition is : "<<fSum<<"\n";

    return 0;
}