#include<iostream>
using namespace std;

int main()
{
	struct Demo
	{
		int no1;
		int no2;
	};
	
	typedef struct Demo DEMO;
	typedef struct Demo * PDEMO;
	typedef struct Demo ** PPDEMO;
		
	//struct Demo obj;
	DEMO obj;
	obj.no1=11;
	obj.no2=12;
	
	//struct Demo *p=NULL;
	//p=&obj;
	PDEMO p=&obj;
	
	//struct Demo **q=&p;
	PPDEMO q=&p;
	
	cout<<"obj.no1:"<<obj.no1;
	cout<<"\nobj.no2:"<<obj.no2;
	cout<<"\nAddress of obj using &obj:"<<&obj;
	cout<<"\nobj address in p:"<<p;
	cout<<"\nAddress of pointer p using &p:"<<&p;
	cout<<"\npointer p address in q:"<<q;
	
	
	return 0;
}

