#include<iostream>//error
using namespace std;

template<class T>
void Display(T value, int iSize)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout<<" <<T value<<"\n";
    }
}

int main()
{
    char ch = '\0';
    int no = 0;

    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}