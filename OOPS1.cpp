#include<iostream>
using namespace std;

class Arithematic
{
	public:
	int iNo1;                                  //Characteristics
	int iNo2;                                  //Characteristics
	
	Arithematic(int A,int B)                   //Parameterised Constructor
	{
		iNo1=A;
		iNo2=B;
	}
	
	~Arithematic()                             //Destructor
	{
		cout<<"\nDestructor called";
	}
	
	int Addition()                              //Behaviour
	{
		int iAns=0;
		iAns=iNo1 + iNo2;
		return iAns;
	}
	
	int Substraction()                          //Behaviour
	{
		int iAns=0;
		iAns=iNo1 - iNo2;
		return iAns;
	}
};
int main()
{
	int ivalue1=0,ivalue2=0;
	int iRet1=0;
	int iRet2=0;
	cout<<"Enter the first number:";
	cin>>ivalue1;
	
	cout<<"Enter the second number:";
	cin>>ivalue2;
	
	Arithematic obj1(ivalue1,ivalue2);
	iRet1=obj1.Addition();
	iRet2=obj1.Substraction();
	
	printf("\nAddition is:%d",iRet1);
	printf("\nSubstraction is:%d",iRet2);
	
	return 0;
}