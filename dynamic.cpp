#include<iostream>
using namespace std;
int main()
{
	int Arr[10];
	int *p=NULL;
	
	//p=(int *)malloc(sizeof(int)*10);   //for c
	
	p=new int[10];
	
	if(p==NULL)
	{
		cout<<"\nUnable to allocate the memory";
	}
	else
	{
		cout<<"\nMemory gets allocated successfully at address:"<<p<<"\n";
	}
	
	delete []p;
	
	return 0;
	
}