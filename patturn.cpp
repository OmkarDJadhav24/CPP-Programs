/*
#include<iostream>
using namespace std;
int main()
{
	int i;
	int j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	int j;
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}

