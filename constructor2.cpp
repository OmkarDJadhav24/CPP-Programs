#include<iostream>
#include<stdio.h>
using namespace std;

class Demo
{
	public:
	int x;                                     //Characteristics
	int y;                                     //Characteristics
	
	Demo()                                     //Default Constructor
	{
		cout<<"\nInside Default Constructor";
		x=0;
		y=0;
	}
	Demo(int i,int j)                           //Parameterized Constructor
	{
		cout<<"\nInside Parameterized Constructor";
		x=i;
		y=j;
	}
	Demo(Demo &ref)                        //Copy Constructor
	{
		cout<<"\nInside Destructor";
		x=ref.x;
		y=ref.y;
	}
	
	~Demo()
	{
		cout<<"\nInside Destructor";
	}
	
};
int main()
{
	Demo obj1(11,12);
	Demo obj2(obj1);
	
	return 0;
}