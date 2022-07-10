// Display difference between facters and Non factors

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
   	
   	int Difference()
   	{
   	    int iFactSum = 0;
   	    int iNonFactSum = 0;
   	    int iCnt = 0;
   	    
   	    for(iCnt=1;iCnt<iNo;iCnt++)
   	    {
   	       if((iNo%iCnt)==0)
   	       {
   	           iFactSum = iFactSum + iCnt;
   	       }
   	       else
   	       {
   	           iNonFactSum = iNonFactSum + iCnt;
   	       }
   	    }
   	    return iNonFactSum - iFactSum;
   	}
};
int main()
{
   Number nobj;
   int iRet = 0;
   
   nobj.Accept();
   nobj.Display();
   iRet=nobj.Difference();
   cout<<"Difference between facters and Non factors is: "<<iRet<<endl;
   
   return 0;
}
