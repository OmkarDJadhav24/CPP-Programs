#include<iostream>
using namespace std;

template<class T>
T FindMax(T Arr[],int Size)
{
    T iMax = Arr[0];
    int i = 0; 
    
    for(i=0;i<Size;i++)
    {
       if(Arr[i]>iMax)
       {
           iMax=Arr[i];
       }
    }
    return iMax;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    int iRet = 0;
    iRet=FindMax(Arr,5);
    cout<<"Max number is: "<<iRet<<endl;
    
    float Brr[] = {10.11,20.30,30.11,40.11,50.11};
    float fRet = 0.0;
    fRet = FindMax(Brr,5);
    cout<<"Max number is: "<<fRet<<endl;
    
    return 0;
}
