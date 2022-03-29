//Exception Handling

#include<iostream>
using namespace std;
float my_divide(float a,float b)
{
	if(b==0)
	{
		throw "Cannot be divide";
	}
     return a/b;
}
int main()
{
	float a=10;
	float b=0;
	float c;
	
	try{
		c=my_divide(a,b);
		cout<<c;
	}
	catch(const char *ptr)
	{
		cerr<<ptr;
	}
}
