#include<iostream>
using namespace std;

class Base1
{
	public:
		int i,j;
		
		Base1()
		{
			cout<<"\nInside Base1 Constructor";
		}
		~Base1()
		{
			cout<<"\nInside Base1 Destructor";
		}
};

class Base2
{
	public:
		int x,y;
		
		Base2()
		{
			cout<<"\nInside Base2 Constructor";
		}
		~Base2()
		{
			cout<<"\nInside Base2 Destructor";
		}
};

class Derived : public Base1,Base2
{
	public:
		int a;
		
		Derived()
		{
			cout<<"\nInside Derived Constructor";
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