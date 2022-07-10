//Write generic program to accept N values from user and return smallest number from that numbers.

#include<iostream>
using namespace std;

template <class T>
T Min(T *arr,int Size)
{
    T Min = arr[0];
    int iCnt = 0;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        if(Min>arr[iCnt])
        {
            Min = arr[iCnt];
        }
    }
    return Min;
}
int main()
{
    int Arr[] = {10,20,30,40,50,60};
    int iRet = Min(Arr,6);
    cout<<"Smallest Number is: "<<iRet<<endl;
    
    float Brr[] = {10.2,20.2,30.2,40.2,50.2,60.2};
    float fRet = Min(Brr,6);
    cout<<"Smallest Number is: "<<fRet<<endl;
    
    return 0;
}
