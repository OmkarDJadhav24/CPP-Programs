
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int b[5];
	int c[5];
	int i;
	cout<<"\n Enter the values in Array A:";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n The values of Array A are:";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n The values in Array B:";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\n The addition of Array A and Array B is:";
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
	
}

/*
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int b[5];
	int c[5];
	int i;
	cout<<"The values of Array A are:";
	for(i=0;i<5;i++)
	{
		a[i]=i+1;
	}
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n The values of Array B are:";
	for(i=0;i<5;i++)
	{
		b[i]=i+11;
	}
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\n The addition of Array A and Array B are:";
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
}
*/
