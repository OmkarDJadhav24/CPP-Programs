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


int main()
{
	Derived dobj;
	return 0;
}