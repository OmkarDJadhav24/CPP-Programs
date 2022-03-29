/*
#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void bubble_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main()
{
	int a[]={2,9,1,4,8,6};
	cout<<"Before swapping the values are:";
	for(int i=0;i<6;i++)
	{
		cout<<" "<<a[i];
	}
	int n=(sizeof(a)/sizeof(a[0]));
	bubble_sort(a,n);
	cout<<"\nAfter swapping the values are:";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
}

*/

#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void bubble(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}
}
int main()
{
	int a[]={3,1,2,7,4};
	cout<<"Before assending order the values are:";
	for(int i=0;i<5;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<"\n";
	int n=(sizeof(a)/sizeof(a[0]));
	bubble(a,n);
	cout<<"After assending order the values are:";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
}
