// Display All its Non Factors

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
   	
   	void NonFact()
   	{
   	   int iCnt = 0;
   	   for(iCnt=1;iCnt<iNo;iCnt++)
   	   {
   	      if((iNo%iCnt) != 0)
   	      {
   	         cout<<iCnt<<endl;;
   	      }
   	   }
   	}
};
int main()
{
   Number nobj;
   nobj.Accept();
   nobj.Display();
   nobj.NonFact();
   
   return 0;
}
