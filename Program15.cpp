//Display the count of even digits

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
   	
   	int CountEven()
   	{
   	   
   	   int iCnt = 0;
   	   while(iNo>0)
   	   {
   	      if((iNo%10)%2==0)
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
   Digit dobj;
   dobj.Accept();
   dobj.Display();
   iRet=dobj.CountEven();
   
   cout<<"Count of even numbers is:"<<iRet<<endl;
   
   return 0;
}
