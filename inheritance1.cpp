#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		Base()
		{
			cout<<"\nInside Base Constructor";
		}
		~Base()
		{
			cout<<"\nInside Base Destructor";
		}
		void fun()
		{
			cout<<"\nInside Base fun";
		}
	
};

class Derived:public Base
{
	public:
		int i,j;
		
	Derived()
	{
		cout<<"\nInside derived constructor";
	}
	~Derived()
	{
		cout<<"\nInside derived destructor";
	}
	void gun()
	{
		cout<<"\nInside derived gun";
	}
};

int main()
{
	Derived dobj;
	
	dobj.fun();
	dobj.gun();
	
	cout<<"\n"<<sizeof(Base);
	cout<<"\n"<<sizeof(Derived);
	
	return 0;
}