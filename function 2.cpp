//function overloading

#include<iostream>
using namespace std;
int add(int x,int y)
{
	return x+y;
}
double add(double x,double y)
{
	return x+y;
}
int main()
{
	cout<<add(3,4);
	cout<<"\n"<<add(20.34,40.34);
}
