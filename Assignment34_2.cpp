//Write generic program to find Largest number from 3 numbers

#include<iostream>
using namespace std;

template <class T>
T Max(T No1,T No2,T No3)
{
    T Maximum = No1;
    
    if(No1<No2)
    {
        Maximum=No2;
    }
    
    if(Maximum<No3)
    {
        Maximum = No3;
    }
    return Maximum;
    
}

int main()
{
    int iValue1=50,iValue2=20,iValue3=9;
    int iRet = Max(iValue1,iValue2,iValue3);
    cout<<"Maximun number is: "<<iRet<<endl;
    
    float fValue1=50.11,fValue2=20.23,fValue3=9.45;
    float fRet = Max(fValue1,fValue2,fValue3);
    cout<<"Maximun number is: "<<fRet<<endl;
    
    return 0;
}
