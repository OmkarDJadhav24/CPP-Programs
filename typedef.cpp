#include<iostream>
using namespace std;

int main()
{
	typedef int NUMBER;
	typedef char LETTER;
	
	NUMBER no=11;
	
	LETTER ch='M';
	
	cout<<"\nSize of no is:"<<sizeof(no);
	cout<<"\n"<<no;
	
	cout<<"\nSize of ch is:"<<sizeof(ch);
	cout<<"\n"<<ch;
	
	//const int *p=NULL;
	//p=&no;
	typedef const int * CPTR;
	CPTR p=&no;
	
	cout<<"\n"<<*p;
	
	return 0;
}