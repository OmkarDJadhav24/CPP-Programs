#include<iostream>
using namespace std;
int main()
{
	int arr[4]={1,2,3,4};
	int (&brr)[4]=arr;
	
	cout<<"\nAddress of arr:"<<arr;
	cout<<"\nAddress of brr:"<<brr;
	return 0;
}