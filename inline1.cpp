#include<iostream>
using namespace std;

class Demo
{
	public:
		int Add(int no1,int no2)
		{
			int ans=0;
			ans=no1 + no2;
			return ans;
		}
};
int main()
{	
	int ret=0;
	ret=obj.Add(11,12);
	
	cout<<ret;
	
	return 0;
}