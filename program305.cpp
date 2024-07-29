#include<iostream>
using namespace std;

// call by value
void Swap(int *x, int *y)
{
    //int temp;
    *x=*x+*y; //a=15 (5+10)    
    *y=*x-*y; //b=5 (15-10)    
    *x=*x-*y; //a=10 (15-5)    

    /*temp = x;
    x = y;
    y = temp;*/
}

int main()
{
    int a = 11, b = 10;
    cout<<"Values before swap\n";
    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    Swap(&a,&b);
    cout<<"Values after swap\n";
    cout<<"Value of a "<<a<<"\n";
    cout<<"Value of b "<<b<<"\n";

    return 0;
}