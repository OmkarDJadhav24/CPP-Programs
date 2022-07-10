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
   	   cout<<"Number is: "<<this->iNo;
   	}
   	
   	int count()
   	{
   	   int iCnt = 0;
   	   
   	   while(iNo>0)
   	   {
   	      if((iNo%10)<6)
   	      {
   	         iCnt++;
   	      }
   	      iNo = iNo%10;
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
   iRet=nobj.count();
   cout<<"Count is: "<<iRet<<endl;  
   
   return 0;
}
