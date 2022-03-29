#include<iostream>
using namespace std;
class Base
{
	public:
		int i,j;
		Base()
		{
			cout<<"\nBase constructor";
		}
		~Base()
		{
			cout<<"\nBase destructor";
		}
	
};

class Derived : public Base
{
	public:
		int a,b,c;
		Derived()
		{
			cout<<"\nDerived constructor";
		}
		~Derived()
		{
			cout<<"\nDerived destructor";
		}
	
};

class Derived1 : public Derived
{
	public:
		int k,l;
		Derived1()
		{
			cout<<"\nDerived1 constructor";
		}
		~Derived1()
		{
			cout<<"\nDerived1 destructor";
		}
};


int main()
{
	Derived1 dobj;
	return 0;
}