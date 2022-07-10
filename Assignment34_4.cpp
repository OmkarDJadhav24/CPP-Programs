//Write generic program to accept N values from user and return largest number from that numbers.

#include<iostream>
using namespace std;

template <class T>
T Max(T *arr,int Size)
{
    T Max = arr[0];
    int iCnt = 0;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        if(Max<arr[iCnt])
        {
            Max = arr[iCnt];
        }
    }
    return Max;
}
int main()
{
    int Arr[] = {10,20,30,40,50,60};
    int iRet = Max(Arr,6);
    cout<<"Largest Number is: "<<iRet<<endl;
    
    float Brr[] = {10.2,20.2,30.2,40.2,50.2,60.2};
    float fRet = Max(Brr,6);
    cout<<"Largest Number is: "<<fRet<<endl;
    
    return 0;
}
