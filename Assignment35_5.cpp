// Write a generic program which accept N values and reverse the content.

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr,int Size)
{
    int j=Size-1;
    T Temp;
    for(int i=0;i<(Size/2);i++)
    {
        Temp = arr[i];
        arr[i] = arr[j];
        arr[j] = Temp;
        j--;
    }
}

int main()
{
    int Arr[]={10,20,30,10,30,40,10,40,10};
    
    for(int i=0;i<9;i++)
    {
       cout<<Arr[i]<<"\t";
    }
    cout<<endl;
    
    Reverse(Arr,9);
    
    for(int i=0;i<9;i++)
    {
       cout<<Arr[i]<<"\t";
    }
    cout<<endl;
    
    float Brr[]={10.2,20.3,30.4,40.5,50.6,60.7,70.8,80.9,90.1};
    for(int i=0;i<9;i++)
    {
       cout<<Brr[i]<<"\t";
    }
    cout<<endl;
    
    Reverse(Brr,9);
    
    for(int i=0;i<9;i++)
    {
       cout<<Brr[i]<<"\t";
    }
    cout<<endl;
    
    
    char Crr[]={'A','B','C','D','E','F','G','H','I'};
    for(int i=0;i<9;i++)
    {
       cout<<Crr[i]<<"\t";
    }
    cout<<endl;
    
    Reverse(Crr,9);
    
    for(int i=0;i<9;i++)
    {
       cout<<Crr[i]<<"\t";
    }
    cout<<endl;
    
    return 0;
}
