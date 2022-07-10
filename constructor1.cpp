#include<iostream>
using namespace std;
class Demo
{
	public:
	int x;
	int y;
	
	Demo()
	{
		cout<<"\nInside default constructor";
		x=0;
		y=0;
	}
	
	Demo(int i,int j)
	{
		cout<<"\nInside parameterised constructor";
		x=i;
		y=j;
	}
	Demo(Demo &ref)
	{
		cout<<"\nInside Copy Constructor";
		x=ref.x;
		y=ref.y;
	}
};
int main()
{
   Demo obj1(11,12);
   Demo obj2(obj1);
   
   return 0;
}