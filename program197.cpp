#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];   //Arr=(int *)malloc(isize * sizeof(int));
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements of array : "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];  //Scanf("%d",&Arr[iCnt]);
            }
        }

        void Display()
        {
            cout<<"Elements of array are : "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";  //printf("%d",&Arr[iCnt]);
            }
            cout<<"\n";
        }
};

int main()
{
    ArrayX obj(5);  // Static & hardcoded

    obj.Accept();
    obj.Display();

    return 0;
}