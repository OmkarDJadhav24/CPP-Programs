#include<iostream>
using namespace std;

template<class T>
T Addition(T A,T B)
{
   T Ans = 0;
   Ans= A + B;
   return Ans;
}

int main()
{
   int No1=11,No2=10,ret=0;
   ret=Addition(No1,No2);
   cout<<"Addition is:"<<ret<<"\n";
   
   float a=10.6,b=11.3,fret=0.0;
   fret=Addition(a,b);
   cout<<"Addition is :"<<fret<<"\n";
   
   return 0;
}

