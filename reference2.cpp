#include<iostream>
using namespace std;
int main()
{
	int no=11;
	int &x=no;
	int &y=no;
	
	cout<<"\nValue of no is:"<<no;
	cout<<"\nValue of x is:"<<x;
	cout<<"\nValue of y is:"<<y;
	
	cout<<"\nAddress of no is:"<<&no;
	cout<<"\nAddress of x is:"<<&x;
	cout<<"\nAddress of y is:"<<&y;
	return 0;
}