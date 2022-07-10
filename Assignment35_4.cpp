// Write a generic program which accept N values and search last occurance of any specific number

#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr,int Size,float Value)
{
   int iCnt = 0;
   for(int i=0;i<Size;i++)
   {
       if(Value == arr[i])
       {
          iCnt = i;
       }
   }
   return iCnt;
}

int main()
{
   int iRet = 0;
   int Arr[]={10,20,30,10,30,40,10,40,10};
   iRet = SearchFirst(Arr,9,10);
   cout<<"First Occurance is: "<<iRet<<endl;
   
   
   float Brr[]={10.2,20.3,30.1,10.6,30.1,40.2,10.7,40.2,10.9};
   iRet = SearchFirst(Brr,9,40.2);
   cout<<"First Occurance is: "<<iRet<<endl;
   
   
   char Crr[]={'A','C','B','A','D','C','A','W','G'};
   iRet = SearchFirst(Crr,9,'A');
   cout<<"First Occurance is: "<<iRet<<endl;
   
   return 0;
}
