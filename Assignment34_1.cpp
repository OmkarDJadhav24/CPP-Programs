// Write a generic program to multiply to numbers

#include<iostream>
using namespace std;

template <class T>
T Multiply(T No1,T No2)
{
    T Ans;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<iRet<<endl;
    
    float fRet = Multiply(10.2,20.2);
    cout<<fRet<<endl;
    
    return 0;
}
