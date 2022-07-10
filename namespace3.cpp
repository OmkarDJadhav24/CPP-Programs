#include<iostream>

namespace Omkar
{
	void fun()
	{
		std::cout<<"Inside Omkar\n";
	}
}

namespace Jadhav
{
	void fun()
	{
		std::cout<<"Inside Jadhav\n";
	}
}

int main()
{
	using namespace Omkar;
	using namespace Jadhav;
	
	Jadhav::fun();
	return 0;
}