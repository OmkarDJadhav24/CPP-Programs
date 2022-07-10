// Accept N numbers from user and display all such elements which are divisible by 5

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
   	~ArrayX()
   	{
   	   delete []Arr;
   	}
   	
   	void Accept()
   	{
   	   int iCnt = 0;
   	   cout<<"Enter the elements:"<<endl;
   	   for(iCnt=0;iCnt<iSize;iCnt++)
   	   {
   	       cin>>Arr[iCnt];
   	   }
   	}
   	
   	void Display()
   	{
   	   int iCnt = 0;
   	   cout<<"Elements of array are:"<<endl;
   	   for(iCnt=0;iCnt<iSize;iCnt++)
   	   {
   	      cout<<Arr[iCnt]<<endl;
   	   }
   	}
   	
   	void DivisibleX()
   	{
   	   int iCnt = 0;
   	   cout<<"Numbers divisible by 5 are:"<<endl;
   	   for(iCnt=0;iCnt<iSize;iCnt++)
   	   {
   	      if((Arr[iCnt]%5)==0)
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
   
   ArrayX nobj(iNo);
   nobj.Accept();
   nobj.Display();
   nobj.DivisibleX();
   
   return 0;
}
