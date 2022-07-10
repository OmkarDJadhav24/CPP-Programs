//positive negative

#include<iostream>
using namespace std;

class Demo
{
	public:
		int x;
		int y;
		
		Demo(int a,int b)
		{
			x=a;
			y=b;
		}
};

Demo operator +(Demo op1)
{
	return op1;
}

Demo operator -(Demo op1)
{
	return Demo(-op1.x,-op1.y);
}
int main()
{
	Demo obj1(11,-21);
	Demo obj2(51,-101);
	Demo robj1(0,0);
	Demo robj2(0,0);
	
	robj1=+obj1;
	robj2=-obj2;
	
	cout<<robj1.x<<" "<<robj1.y<<"\n";
	cout<<robj2.x<<" "<<robj2.y<<"\n";
	
	return 0;
}