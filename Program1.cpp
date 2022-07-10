#include<iostream>
using namespace std;

class EvenPrint
{
   private:
   	int iNo;
   	
   public:
   	void Accept()      //Setter
   	{
   	   cout<<"Enter number:"<<endl;
   	   cin>>this->iNo;
   	}
   	void Display()
   	{
   	   cout<<"Value is:"<<this->iNo<<endl;
   	}
   	
   	void EvenCheck()
   	{
   	   int iCnt = 0;
   	   int iEven = 0;
   	   
   	   for(iCnt=1;iCnt<=iNo;iCnt++)
   	   {
   	      iEven = iEven + 2;
   	      cout<<iEven<<endl;
   	   }
   	}
 };
 
int main()
{
   EvenPrint obj;
   obj.Accept();
   obj.Display();
   obj.EvenCheck();
   
   return 0;
}
