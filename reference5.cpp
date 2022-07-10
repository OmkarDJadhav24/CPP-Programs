#include<iostream>
using namespace std;
int main()
{
	int no=10;
	int *p=&no;
	int *(&q)=p;
	
	cout<<"\nValue of no is:"<<no;
	cout<<"\nValue of p is:"<<p;
	cout<<"\nValue of q is:"<<q;
	
	return 0;
}