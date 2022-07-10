//Display multiplication of factors


#include<iostream>
using namespace std;

class Number
{
    private:
    	int iNo;
    	
    public:
    	void Accept()
    	{
    	   cout<<"Enter the number: "<<endl;
    	   cin>>this->iNo;
    	   if(iNo<0)
   	   {
   	     iNo = -iNo;
   	   }
    	}
    	
    	void Display()
    	{
    	   cout<<"Number is: "<<this->iNo<<endl;
    	}
    	
    	int FactMult()
    	{
    	   int iMult = 1;
    	   int iCnt = 0;
    	   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    	   {
    	       if((iNo%iCnt)==0)
    	       {
    	          iMult = iMult * iCnt;
    	       }
    	   }
    	   return iMult;
    	}
    	
};
int main()
{
    Number nobj;
    int iRet = 0;
    
    nobj.Accept();
    nobj.Display();
    iRet=nobj.FactMult();
    cout<<"Multiplication of factors is: "<<iRet<<endl;
    
    return 0;
}
