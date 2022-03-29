#include<iostream>
using namespace std;
class Base1
{
	public:
		int i,j;
		Base1()
		{
			cout<<"\nBase1 constructor";
		}
		~Base()
		{
			cout<<"\nBase1 destructor";
		}
	
};

class Base2
{
	public:
		int x,y;
		Base2()
		{
			cout<<"\nBase2 constructor";
		}
		~Derived()
		{
			cout<<"\nBase2 destructor";
		}
	
};

class Derived : public Base2,Base1
{
	public:
		int a;
		Derived()
		{
			cout<<"\nDerived constructor";
		}
		~Derived()
		{
			cout<<"\nDerived destructor";
		}
};


int main()
{
	Derived dobj;
	return 0;
}