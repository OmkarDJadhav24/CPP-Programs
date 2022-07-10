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
};

bool operator ==(Demo op1,Demo op2)
{
	if((op1.x==op2.x) && (op1.y==op2.y))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	Demo robj(0,0);
	
	
	if(obj1==obj2)                            // ==(obj1,obj2);
	{
		cout<<"Objects are same\n";
	}
	else
	{
		cout<<"Objects are not same\n";
	}
	
	return 0;
}