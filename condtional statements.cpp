#include<iostream>
using namespace std;
int main()
{
	int a=106;
	int b=77;
	int c=88;
	
	if(a>b && a>c)
	{
		cout<<"A is the greatest number";
	}
	else if(b>a && b>c)
	{
		cout<<"B is the greatest number";
	}
	else
	{
		cout<<"C is the greatest number";
	}
	return 0;
}
