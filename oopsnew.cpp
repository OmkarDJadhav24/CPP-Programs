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
	
	~Demo()
	{
		cout<<"\nInside Destructor";
	}
	
	void fun()
	{
		cout<<"\nInside fun";
	}
};
int main()
{
   Demo obj;                             //Static object creation
   Demo *ptr=NULL;
   ptr=new Demo;                        //Dynamic object creation
   
   obj.fun();                           //Direct access memory
   ptr->fun();                           //Indirect access memory
   
   delete ptr;
   return 0;
}