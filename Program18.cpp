//Display the multiplication of all digits

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
   	
   	int DigitMult()
   	{
   	   int iMult = 1;
   	   while(iNo>0)
   	   {
   	     iMult = iMult * (iNo%10);
   	     iNo = iNo/10;
   	   }
   	   return iMult;
   	}

};
int main()
{
   Digit dobj;
   int iRet = 0;
   
   dobj.Accept();
   dobj.Display();
   iRet=dobj.DigitMult();
   cout<<"Multiplication of digits is: "<<iRet<<endl;
   
   return 0;
}
