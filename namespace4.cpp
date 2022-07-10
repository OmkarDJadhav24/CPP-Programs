
//We cannot use this namespace outside this file

#include<iostream>

namespace 
{
	void fun()
	{
		std::cout<<"Inside Fun\n";
	}
}
int main()
{
	fun();
	return 0;
}