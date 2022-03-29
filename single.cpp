#include<iostream>
using namespace std;

class Base
{
	public:
		int i,j;
	
		Base()
		{
			cout<<"\nInside Base constructor";
		}
		~Base()
		{
			cout<<"\nInside Base destructor";
		}
};

class Derived : public Base
{
	public:
		int a,b,c;
		Derived()
		{
			cout<<"\nInside Derived constructor";
		}
		~Derived()
		{
			cout<<"\nInside Derived Destructor";
		}
};

int main()
{
	Derived dobj;
	return 0;
}