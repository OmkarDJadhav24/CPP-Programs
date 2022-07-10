// Write a generic program which accept N values and count the frequecy of any specific value.

#include<iostream>
using namespace std;

template <class T>
int Frequency(T *arr,int Size,T No)
{
   int iCnt = 0;
   for(int i=0;i<Size;i++)
   {
      if(No == arr[i])
      {
          iCnt++;
      }
   }
   return iCnt;
}

int main()
{
   int iRet = 0;
   int Arr[]={10,20,30,10,30,40,10,40,10};
   iRet = Frequency(Arr,9,10);
   cout<<"Frequecy is: "<<iRet<<endl;
   
   float Brr[]={10.2,20.2,30.2,10.2,30.1,40.5,10.2,40.7,10.2};
   iRet = Frequency(Brr,9,10.2f);
   cout<<"Frequecy is: "<<iRet<<endl;
   
   char Crr[]={'A','B','C','D','A','B','A','F','A'};
   iRet = Frequency(Crr,9,'A');
   cout<<"Frequecy is: "<<iRet<<endl;
   
   return 0;
}
