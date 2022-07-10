#include<iostream>
using namespace std;

class Base1
{
	public:
		void fun();
		void gun();
};

class Base
{
	public:
		int i;
		
	private:
		int j;
		
	protected:
		int k;
		
	friend class Base1;
};

void Base1::fun()
{
	Base bobj;
	cout<<"\n"<<bobj.i;
	cout<<"\n"<<bobj.j;
	cout<<"\n"<<bobj.k;
}

void Base1::gun()
{
	Base bobj;
	cout<<"\n"<<bobj.i;
	cout<<"\n"<<bobj.j;
	cout<<"\n"<<bobj.k;
}
int main()
{
	Base1 bobj1;
	bobj1.fun();
	bobj1.gun();
	return 0;
}