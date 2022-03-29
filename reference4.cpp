#include<iostream>
using namespace std;
int main()
{
	int no=11;
	int &x=no;
	
	int *p=&x;
	
	cout<<"\nvalue of no:"<<no;
	cout<<"\nvalue of x:"<<x;
	cout<<"\nValue of y:"<<p;
	
	return 0;
}