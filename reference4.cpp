#include<iostream>
using namespace std;
int main()
{
	int no=11;
	int &x=no;
	
	int *p=&x;
	
	cout<<"\nValue of no is:"<<no;
	cout<<"\nValue of x is:"<<x;
	cout<<"\nAddress of no is:"<<&no;
	cout<<"\nAddress of x is:"<<&x;
	cout<<"\nAddress of x in p is:"<<p;
	return 0;
}