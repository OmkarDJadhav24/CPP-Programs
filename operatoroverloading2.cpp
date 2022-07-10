#include<iostream>
using namespace std;

class Demo
{
	int x;
	int y;
	
	public:
		Demo(int a=10,int b=20)
		{
			x=a;
			y=b;
		}
	friend Demo operator +(Demo op1,Demo op2)
};

Demo operator +(Demo op1,Demo op2)
{
	return Demo(op1.x + op2.y,op1.y + op2.y);
}
int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	Demo robj(0,0);
	
	robj=obj1 + obj2;       //robj= +(obj1,obj2);
	cout<<robj.x<<"\n";
	cout<<robj.y<<"\n";
	
	return 0;
}