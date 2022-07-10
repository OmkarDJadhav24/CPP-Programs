#include<iostream>
using namespace std;

class Demo
{
	private:
		int i;
		
		Demo(int no)
		{
			i=no;
			cout<<i;
		}
		
		static void fun(int n)
		{
			
			cout<<i;
		}
		
		
};

int main()
{
	Demo obj(11);
	Demo.fun(13);
	return 0;
}