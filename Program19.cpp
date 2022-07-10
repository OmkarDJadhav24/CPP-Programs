//Display the difference between summation of even digits and summation of odd digits

#include<iostream>
using namespace std;

class Digit
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
   	   return;
   	}
   	
   	int Count()
   	{
   	   int iFSum = 0;
   	   int iFNSum = 0;
   	   while(iNo>0)
   	   {
   	      if((iNo%10)%2 == 0)
   	      {
   	         iFSum = iFSum + (iNo%10);
   	      }
   	      else
   	      {
   	         iFNSum = iFNSum + (iNo%10);
   	      }
   	      iNo = iNo/10;
   	   }
   	   return iFNSum - iFSum;
   	}

};
int main()
{
   int iRet = 0;
   Digit dobj;
   dobj.Accept();
   dobj.Display();
   iRet=dobj.Count();
   
   cout<<"difference between summation of even digits and summation of odd digits is:"<<iRet<<endl;
   
   return 0;
}
