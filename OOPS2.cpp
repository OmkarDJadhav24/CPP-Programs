#include<iostream>
using namespace std;

class Demo
{
	public:
		void fun(int *p)
		{
			cout<<"\nFirst Defination";
		}
		
		void fun(float *p)
		{
			cout<<"\nSecond Defination";
		}
		
		void fun(int no)
		{
			cout<<"\nThird Defination";
		}
};
int main()
{
	int no=11;
	float f=3.14;
	
	Demo obj;
	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);
	
	return 0;
}