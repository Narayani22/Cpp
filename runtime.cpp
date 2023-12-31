#include<iostream>
using namespace std;

class Base
{
    public: //Access specifier
        int A,B;

    void fun() //Function defination    1000
    {
        cout<<"Base fun\n";
    }
    void gun(int i) //Function defination  2000
    {
        cout<<"Base gun with one integer, Value of i is "<<i<<"\n";
    }
    void gun(int i, int j) // Overloaded function defination  3000
    {
        cout<<"Base gun with two integers, Value of i and j are  "<<i<<" and "<<j<<"\n";
    }
};

class Derived : public Base
{
    public:
        int X,Y;
        void sun() // Function defination  4000
        {
            cout<<"Derived sun\n";
        }
        void fun() // Function redefination  5000
        {
            cout<<"Derived fun\n";
        }
};

int main()
{
    Derived dobj;
    dobj.Base::fun();
    dobj.fun();   // CALL 5000
    dobj.gun(11);  // CALL 2000
    dobj.gun(11,21); // CALL 3000
    dobj.sun();  //CALL 4000

    return 0;
}