#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		int j;
		static int k;
		static int l;

		Demo()
		{
			i = 0;
			j = 0;
		}
                Demo(int a, int b)
		{
			i = a;
			j = b;
		}
		void fun()
		{
			cout<<"Inside non static method fun\n";
			cout<<"value of i : "<<this->i<<"\n";
			cout<<"value of j : "<<this->j<<"\n";
			cout<<"value of k : "<<k<<"\n";
			cout<<"value of l : "<<l<<"\n";
		}
		static void gun()
		{
			cout<<"Inside static method gun\n";
			cout<<"value of k : "<<k<<"\n";
			cout<<"value of l : "<<l<<"\n";
		}
};

int Demo::k = 0;
int Demo::l = 0;

int main()
{
	cout<<"Inside main\n";
	cout<<"Value of k : "<<Demo::k<<"\n";
	cout<<"Value of l : "<<Demo::l<<"\n";
	Demo::gun();

	Demo obj1(10,12);
	Demo obj2(20,22);
	Demo obj3;

	cout<<"Value of i in obj1 : "<<obj1.i<<"\n";
	cout<<"Value of i in obj2 : "<<obj2.i<<"\n";

	cout<<"Value of j in obj1 : "<<obj1.j<<"\n";
	cout<<"Value of j in obj2 : "<<obj2.j<<"\n";

	obj1.fun();
	obj2.fun();

	return 0;
}