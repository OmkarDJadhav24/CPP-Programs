//Solution is next file operatorOverloading4.cpp

#include<iostream>
using namespace std;

class Demo
{
	public:
		int x;
		int y;
		
		Demo(int i=0,int j=0)
		{
			x=i;
			y=j;
		}
		
};

int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	
	if(obj1==obj2)
	{
		cout<<"Objects are same\n";
	}
	else
	{
		cout<<"Objects are not same\n";
	}
	
	return 0;
}