#include<iostream>
using namespace std;

class Arithematic
{
	public:
	int iNo1;                          //Characteristics
	int iNo2;
	
	Arithematic()                              //Default Constructor
	{
		cout<<"Inside Default Constructor\n";
		iNo1=0;
		iNo2=0;
	}
	
	Arithematic(int A,int B)                   //Parameterised Constructor
	{
		cout<<"Inside Parameterised Constructor\n";
		iNo1=A;
		iNo2=B;
	}
	~Arithematic()                             //Destructor
	{
		cout<<"\nInside Destructor\n";
	}
	
	int Addition()                     //Behaviour
	{
	  	int iAns=0;
		iAns=iNo1 + iNo2;
		return iAns;
	}
	
	int Substraction()                  //Behaviour
	{
	    int iAns=0;
		iAns=iNo1 - iNo2;
		return iAns;
	}
};
int main()
{
	 int ivalue1=0;
	 int ivalue2=0;
	 int iret=0;
	
	cout<<"Enter first number:\n";
	cin>>ivalue1;
	
	cout<<"Enter the second number:\n";
	cin>>ivalue2;
	
	Arithematic obj1;						//calls default constructor
	Arithematic obj2(ivalue1,ivalue2);		//calls parameterised constructor
	
	iret=obj2.Addition();
	cout<<"\nAddition is:"<<iret;
	
	iret=obj2.Substraction();
	cout<<"\nSubstraction is:"<<iret;
	
	return 0;
}