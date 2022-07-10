#include<iostream>
using namespace std;

int main()
{
	struct Demo
	{
		int no1;
		int no2;
	};
	
	//First way to use type def
	typedef struct Demo DEMO;
	typedef struct Demo * PDEMO;
	typedef struct Demo ** PPDEMO;
	
	//struct Demo obj;
	Demo obj;
	//struct Demo *p=&obj;
	PDEMO p=&obj;
	//struct Demo **q=&p;
	PPDEMO q=&p;
	
	
	/*  Second way to use type def
	typedef struct Demo
	{
		int no1;
		int no2;
	}DEMO,*PDEMO,**PPDEMO;
	*/
	
	return 0;
}
