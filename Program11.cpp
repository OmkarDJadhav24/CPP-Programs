// Check whether the number contains zero or not

#include<iostream>
using namespace std;

class Number
{
   private:
   	int iNo;
   	
   public:
   	void Accept()
   	{
   	   cout<<"Enter the number:"<<endl;
   	   cin>>this->iNo;
   	   
   	   if(iNo<0)
   	   {
   	      iNo = -iNo;
   	   }
   	}
   	void Display()
   	{
   	   cout<<"Number is:"<<iNo<<endl;
   	}
   	
	int ChkZero()
	{
	   int Chk = 0;
	   while(iNo>0)
	   {
	      if((iNo%10)==Chk)
	      {
	         return 1;
	      }
	      iNo = iNo/10;
	   }
	   return 0;
	}   	
};
int main()
{
   int iRet = 0;  
   Number nobj;
   nobj.Accept();
   nobj.Display();
   iRet=nobj.ChkZero();
   
   if(iRet == 1)
   {
      cout<<"It contains zero"<<endl;
   }
   else
   {
      cout<<"There is no zero"<<endl;
   }
   
   return 0;
}
