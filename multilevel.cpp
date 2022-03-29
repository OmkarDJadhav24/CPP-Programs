#include<iostream>
using namespace std;

class Base
{
	public:
		int i,j;
	
		Base()
		{
			cout<<"\nInside Base Constructor";
		}
		~Base()
		{
			cout<<"\nInside Based Destructor";
		}
};

class Derived : public Base
{
	public:
		int a,b,c;
		
		Derived()
		{
			cout<<"\nInside Derived Constructor";
		}
		~Derived()
		{
			cout<<"\nInside Derived Destructor";
		}
};

class Derived1 : public Derived
{
	public:
		int l,k;
		
		Derived1()
		{
			cout<<"\nInside Derived1 Constructor";
		}
		~Derived1()
		{
			cout<<"\nInside Derived1 Destructor";
		}
};

int main()
{
	Derived1 dobj;
	return 0;
}