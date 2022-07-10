#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		void fun()
		{
			cout<<"\nInside Base fun";
		}
		virtual void gun()
		{
			cout<<"\nInside Base gun";
		}
		virtual void sun()
		{
			cout<<"\nInside Base sun";
		}
		virtual void run()=0;
};

class Derived : public Base
{
	public:
		int i,j;
		
		void fun()
		{
			cout<<"\nInside Derived fun";
		}
		virtual void gun()
		{
			cout<<"\nInside Derived gun";
		}
		void run()
		{
			cout<<"\nInside Derived run";
		}
};
int main()
{
	Derived dobj;
	Base *bp=NULL;
	bp=&dobj;
	
	bp->fun();
	bp->gun();
	bp->sun();
	bp->run();
	
	return 0;
}