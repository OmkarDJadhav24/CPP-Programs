//Write generic program to accept N values from user and return addition of that numbers.

#include<iostream>
using namespace std;
 
template <class T>
T AddN(T *arr,int Size)
{
    int iCnt = 0;
    T Sum = arr[0];
    for(iCnt=1;iCnt<Size;iCnt++)
    {
        Sum = Sum + arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Arr[]={10,20,30,40,50,60};
    int iRet = AddN(Arr,6);
    cout<<"Addition is: "<<iRet<<endl;
    
    float Brr[]={10.2,20.2,30.2,40.2,50.2,60.2};
    float fRet = AddN(Brr,6);
    cout<<"Addition is: "<<fRet<<endl;
    
    return 0;
}
