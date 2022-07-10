//Display elements of array which are divisible by 11

#include<iostream>
using namespace std;

class ArrayX
{
   private:
   	int iSize;
   	int *Arr;
   	
   public:
   	ArrayX(int iValue)
   	{
   	   this->iSize = iValue;
   	   Arr = new int[iSize];
   	}
   	
   	void Accept()
   	{
   	   int iCnt = 0;
   	   cout<<"Enter elements of Array:"<<endl;
   	   for(iCnt=0;iCnt<iSize;iCnt++)
   	   {
   	      cin>>Arr[iCnt];
   	   }
   	}
   	
   	void Display()
   	{
   	   int iCnt = 0;
   	   cout<<"Elements of Array are:"<<endl;
   	   for(iCnt=0;iCnt<iSize;iCnt++)
   	   {
   	       cout<<Arr[iCnt]<<endl;
   	   }
   	}
   	
   	void MultiX()
   	{
   	   int iCnt = 0;
   	   cout<<"Elements which are divisible by 11 are:"<<endl;
   	   for(iCnt=0;iCnt<iSize;iCnt++)
   	   {
   	      if((Arr[iCnt]%11)==0)
   	      {
   	         cout<<Arr[iCnt]<<endl;
   	      }
   	   }
   	}

};
int main()
{
   int iNo = 0;
   cout<<"Enter number of elements:"<<endl;
   cin>>iNo;
   
   ArrayX obj(iNo);
   
   obj.Accept();
   obj.Display();
   obj.MultiX();
   
   return 0;
}
