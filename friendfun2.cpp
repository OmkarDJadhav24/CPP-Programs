#include<iostream>
using namespace std;

class Base2
{
	public:
		void fun();
		void gun();
};
class Base
{
	public:
		int i;
	
	protected:
		int j;
		
	private:
		int k;
		
	friend void Base2::fun();
	friend void Base2::gun();
};


void Base2::fun()
{
	Base bobj;
	cout<<"\n"<<bobj.i;
	cout<<"\n"<<bobj.j;
	cout<<"\n"<<bobj.k;
}

void Base2::gun()
{
	Base bobj;
	cout<<"\n"<<bobj.i;
	cout<<"\n"<<bobj.j;
	cout<<"\n"<<bobj.k;
}

int main()
{
	Base2 bobj2;
	bobj2.fun();
	bobj2.gun();
	
	return 0;
}