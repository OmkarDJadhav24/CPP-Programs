#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int a=10,int b=20)
	{
		x=a;
		y=b;
	}
	
	void fun(int no)                 //1000          void fun(Demo *this,int no)
	{
		cout<<"\nInside fun"<<"\n"<<this;
	}
	
};

int main()
{
    Demo obj(11,21);
    obj.fun(51);                                      //fun(&obj,51)	fun(100,51)
	cout<<"\n"<<&obj;
    return 0;
}