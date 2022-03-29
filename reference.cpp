#include<iostream>
using namespace std;
int main()
{
	int no=11;
	int &x=no;
	
	int *p=&no;
	
	cout<<"\nvalue of no:"<<no;
	cout<<"\nvalue of x:"<<x;
	cout<<"\nValue of p:"<<p;
	
	return 0;
}