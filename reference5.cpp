#include<iostream>
using namespace std;
int main()
{
	int no=11;
	
	int *p=&no;
	int *(&q)=p;
	
	cout<<"\nvalue of no:"<<no;
	cout<<"\nvalue of x:"<<p;
	cout<<"\nValue of y:"<<q;
	
	return 0;
}