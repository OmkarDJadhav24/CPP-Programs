//Display Factors in Reverse order

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
    	
    	void ReverseFact()
    	{
    	   int iCnt = 0;
    	   for(iCnt=(iNo/2);iCnt>=1;iCnt--)
    	   {
    	      if((iNo%iCnt)==0)
    	      {
    	         cout<<iCnt<<endl;
    	      }
    	   }
    	}
};
int main()
{
   Number nobj;
   nobj.Accept();
   nobj.Display();
   nobj.ReverseFact();
   return 0;
}
