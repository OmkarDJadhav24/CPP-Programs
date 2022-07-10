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
         cout<<"Elements of Array is:"<<endl;
         for(iCnt=0;iCnt<iSize;iCnt++)
         {
            cout<<Arr[iCnt]<<endl;
         }
      }
      int Summation()
      {
         int iSum=0,iCnt=0;
         for(iCnt=0;iCnt<iSize;iCnt++)
         {
            iSum = iSum + Arr[iCnt];
         }
         return iSum;
      }
      
};
int main()
{
   ArrayX aobj(5);
   int iRet = 0;
   
   aobj.Accept();
   aobj.Display();
   iRet=aobj.Summation();
   cout<<"Addition is: "<<iRet<<endl;
   
   return 0;
}
