// Accept N numbers from user and display difference between even numbers and odd numbers

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
   	   this->Arr = new int[iSize];
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
   	    cout<<"Elements of Array are:"<<endl;
   	    for(iCnt=0;iCnt<iSize;iCnt++)
   	    {
   	        cout<<Arr[iCnt]<<endl;
   	    }
   	}
   	
   	int DiferenceX()
   	{
   	    int iCnt = 0;
   	    int iESum = 0;
   	    int iOSum = 0;
   	    for(iCnt=0;iCnt<iSize;iCnt++)
   	    {
   	        if((Arr[iCnt]%2)==0)
   	        {
   	           iESum = iESum + Arr[iCnt];
   	        }
   	        else
   	        {
   	           iOSum = iOSum + Arr[iCnt];
   	        }
   	    }
   	    return iESum - iOSum;
   	}
  
};
int main()
{
    int iRet = 0;
    int iNo = 0;
    cout<<"Enter number of element: "<<endl;
    cin>>iNo;
    
    ArrayX obj(iNo);
    obj.Accept();
    obj.Display();
    iRet=obj.DiferenceX();
    cout<<"Difference is: "<<iRet<<endl;
    
    return 0;
}
