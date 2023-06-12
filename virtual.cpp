#include<iostream>
using namespace std;

class Base
{
    public: //Access specifier
        int A,B;

        void fun()
        {
            cout<<"Base fun\n";
        }
        virtual void gun()
        {
            cout<<"Base gun\n";
        }       
        virtual void sun()
        {
            cout<<"Base sun\n";
        }
        virtual void run()
        {
            cout<<"Base run\n";
        }
};
class Derived : public Base
{
    public:
        int X,Y;
        void gun()
        {
            cout<<"Derived gun\n";
        }
        virtual void run()
        {
            cout<<"Derived run\n";
        } 
        virtual void mun()
        {
            cout<<"Derived mun\n";
        }
};
int main()
{
    Base *bp = NULL; //dynamic memory allocation 
    bp = new Derived; // upcasting 
    
    /* Base *bp = NULL; static memory allocation
       Derived dobj;
       bp = & dobj; upcasting

       Derived dobj;
       Base &bref = dobj; upcasting 
       bref is a reference of type base refering to dobj which is the object of derived class
    */

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
    // bp->mun();

    return 0;
}
/*
            bp->gun();       c++ language

            gun(bp);         c language

            gun(300);

            PUSH 300         stored in the register ESI
            MOV EAX, ESI     EAX register contains 300
            MOV EBX, [EAX]   EBX contains 400
            CALL [EBX + 0]   CALL 5000  // CALL to gun function
*/