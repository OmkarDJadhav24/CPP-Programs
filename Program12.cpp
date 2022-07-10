// Count the frequency of 2 in number

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
   	   cout<<"Number is: "<<this->iNo<<endl;
   	}
   	
	int Count()
	{
	   int iCnt = 0;
	   while(iNo>0)
	   {
	      if((iNo%10)==2)
	      {
	         iCnt++;
	      }
	      iNo = iNo/10;
	   }
	   return iCnt;
	}   	
};
int main()
{
   int iRet = 0;  
   
   Number nobj;
   nobj.Accept();
   nobj.Display();
   iRet=nobj.Count();
   cout<<"Frequency of 2 in number is: "<<iRet<<endl;
   
   return 0;
}
