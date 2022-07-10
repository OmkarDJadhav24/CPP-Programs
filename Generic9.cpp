#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[],int Size)
{
    int i = 0;
    for(i=0;i<Size;i++)
    {
        cout<<Arr[i]<<endl;
    }
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    
    Display(Arr,5);
    
    float Brr[] = {10.11,20.30,30.11,40.11,50.11};
    
    Display(Brr,5);
    
    return 0;
}
