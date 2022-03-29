#include<iostream>
using namespace std;

class Demo
{
	public:
		//Addition@2ii
		int Addition(int no1,int no2)             //1000         name mangling      changing name
		{
			int iAns=0;
			iAns=no1 + no2;
			return iAns;
		}
		
		//Addition@3iii
		int Addition(int no1,int no2,int no3)     //2000         name mangling    changing name
		{
			int iAns=0;
			iAns=no1 + no2 +no3;
			return iAns;
		}
		
		//Addition@4iiii
		int Addition(int no1,int no2,int no3,int no4)   //3000    name mangling       changing name
		{
			int iAns=0;
			iAns=no1 + no2 + no3 + no4;
			return iAns;
		}
};

int main()
{
	int iResult=0;
	Demo obj;
	
	//PUSH 10
	//PUSH 11
	//CALL 1000
	iResult=obj.Addition(10,20);                              //obj.Addition@2ii(10,11)
	cout<<"Addition of two numbers:"<<iResult;
	
	//PUSH 10
	//PUSH 20
	//PUSH 30
	//CALL 2000
	iResult=obj.Addition(10,20,30);                            //obj.Addition@3iii
	cout<<"\nAddition of three numbers is:"<<iResult;
	
	//PUSH 10
	//PUSH 20
	//PUSH 30
	//PUSH 40
	//CALL 3000
	iResult=obj.Addition(10,20,30,40);                          //obj.Addition@4iiii
	cout<<"\nAddition of four numbers is:"<<iResult;
	
	return 0;
}


/*
//Allowed
changing number of arguments
void fun(int , int);
void fun(int int int);


changing datatype of arguments
void fun(int ,int);
void fun(double,double);

changing sequence of arguments
void fun(int,char,double);
void fun(double,char,int);


Not Allowed
changing return value
int fun();
float fun();
*/