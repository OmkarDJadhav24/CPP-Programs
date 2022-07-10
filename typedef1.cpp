#include<iostream>
using namespace std;

int main()
{
	int no1=11;
	char ch1='A';
	
	typedef int Number;
	Number no2=12;
	
	typedef char LETTER;
	LETTER ch2='B';
	ch2++;
	
	typedef int * pNo;
	pNo iptr=&no1;
	
	typedef char * pCh;
	pCh cptr=&ch1;
	
	//cout<<no1<<"\n";
	//cout<<no2<<"\n";
	//cout<<ch1<<"\n";
	//cout<<ch2<<"\n";
	cout<<* iptr<<"\n";
	cout<<* cptr<<"\n";
	
	return 0;
}