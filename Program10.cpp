// Display digits of number in reverse order

#include<iostream>
using namespace std;

class Number
{
   private:
   	int iNo;
   	
   public:
   	void Accept()                                  //void Accept(Number *this)
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
   	
   	int DisplayRev()
   	{
   	   int iRev = 0;
   	   while(iNo>0)
   	   {
   	      iRev = (iRev*10) + (iNo%10);
   	      iNo = iNo/10;
   	   }
   	   return iRev;
   	}
};
int main()
{
   int iRet = 0;
   
   Number nobj;
   nobj.Accept();                                       //Accept(&nobj);
   nobj.Display();
   iRet = nobj.DisplayRev();
   cout<<"Number in reverse order is: "<<iRet<<endl;
   
   return 0;
}
