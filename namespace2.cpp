#include<iostream>
using namespace std;

namespace Omkar
{
	void fun()
	{
		cout<<"Hello World\n";
	}
}
int main()
{
	using namespace Omkar;
	fun();
	return 0;
}