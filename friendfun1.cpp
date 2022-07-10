#include<iostream>
using namespace std;

class Base
{
	public:
		int i;
		
	private:
		int j;
		
	protected:
		int k;

	Base()
	{
		i=10;
		j=20;
		k=30;
	}
		
	friend void fun();
};

void fun()
{
	Base bobj;
	cout<<"\n"<<bobj.i;
	cout<<"\n"<<bobj.j;
	cout<<"\n"<<bobj.k;
}
int main()
{
	fun();
	return 0;
}