#include<iostream>
using namespace std;

class Demo
{
	public:
		int x;
		int y;
		
		Demo(int a=10,int b=20)
		{
			x=a;
			y=b;
		}
};

Demo operator ++(Demo &op)                 //Pre
{
	op.x++;
	op.y++;
	return op;
}

Demo operator ++(Demo &op,int)             //Post
{
	op.x++;
	op.y++;
	
	return Demo(op.x-1,op.y-1);
}
int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	Demo robj1(0,0);
	Demo robj2(0,0);
	
	robj1=++obj1;                               //without dummy
	robj2=obj2++;                               //with dummy
	
	cout<<robj1.x<<" "<<robj1.y<<"\n";
	cout<<obj1.x<<" "<<obj1.y<<"\n";
	
	cout<<robj2.x<<" "<<robj2.y<<"\n";
	cout<<obj2.x<<" "<<obj2.y<<"\n";
	
	return 0;
}