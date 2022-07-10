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
   	}
   	
   	void Display()
   	{
   	   cout<<"Value is:"<<this->iNo<<endl;
   	}
   	
   	void EvenFact()
   	{
   	   int iCnt = 0;
   	   for(iCnt=2;iCnt<=(iNo/2);iCnt++)
   	   {
   	      if((iNo%iCnt)==0)
   	      {
   	         if((iCnt%2)==0)
   	         {
   	            cout<<iCnt<<endl;
   	         }
   	      }
   	   }
   	}

};
int main()
{
   Number obj;
   obj.Accept();
   obj.Display();
   obj.EvenFact();
   
   return 0;
}
