#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	
};

class Hello : public Demo
{
	public:
		int x;
	private:
		int y;
	protected:
		int z;
	public:
		void fun()
		{
			cout<<"\n"<<k;
		}
	
};
int main()
{
	Demo dobj;
	Hello hobj;
	cout<<"\nSize of dobj:"<<sizeof(dobj);
	cout<<"\nSize of hobj:"<<sizeof(hobj);
	
	cout<<"\n"<<dobj.i;            //A
	//dobj.j;            			//NA
	//dobj.k;            			//NA

	cout<<"\n"<<hobj.x;             //A
	//hobj.y;             			//NA
	//hobj.z;              			//NA
	
	cout<<"\n"<<hobj.i;             //A
	//hobj.j;             			//NA
	//hobj.k;             			//NA
	
	return 0;
}