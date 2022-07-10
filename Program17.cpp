////Display the count of digits which are between 3 and 7

#include<iostream>
using namespace std;

class Digit
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
   	
   	int Count()
   	{
   	   int iCnt = 0;
   	   while(iNo>0)
   	   {
   	      if((iNo%10)>=3 && (iNo%10)<=7)
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
   Digit dobj;
   int iAns = 0;
   
   dobj.Accept();
   dobj.Display();
   iAns = dobj.Count();
   
   cout<<"Count of number between 3 and 7 is:"<<iAns;
}
