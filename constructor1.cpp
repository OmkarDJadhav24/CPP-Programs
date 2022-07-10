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
	}
	
	~Demo()
	{
		cout<<"\nInside Destructor";
	}
	
};
int main()
{
	Demo obj1(11,12);
	Demo obj2(51,101);
	printf("\nSize of obj1:%d",sizeof(obj1));
	cout<<"\nValue of x in obj1:"<<obj1.x;
	cout<<"\nValue of y in obj1:"<<obj1.y;
	
	obj1.x++;
	cout<<"\nNew value of x of obj1is:"<<obj1.x;
	cout<<"\nNew value of x of obj2 is:"<<obj2.x;
	
	return 0;
}