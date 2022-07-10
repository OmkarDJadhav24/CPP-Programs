// Display summation of Non factors

#include<iostream>
using namespace std;

class Number
{
    private:
    	int iNo;
    	
    public:
    	void Accept()
    	{
    	   cout<<"Enter number:"<<endl;
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
    	
    	int SumNonFact()
    	{
    	   int iSum = 0;
    	   int iCnt = 0;
    	   for(iCnt=1;iCnt<iNo;iCnt++)
    	   {
    	      if((iNo%iCnt) != 0)
    	      {
    	          iSum = iSum + iCnt;
    	      }
    	   }
    	   return iSum;
    	}

};

int main()
{
   Number nobj;
   int iRet = 0;
   
   nobj.Accept();
   nobj.Display();
   iRet = nobj.SumNonFact();
   cout<<"Summation is: "<<iRet<<endl;
   
   return 0;
}
