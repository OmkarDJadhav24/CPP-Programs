// Write a generic program which accept one value and one number from user and print that value that number of times on screen

#include<iostream>
using namespace std;

template <class T>
void Display(T ch,int No)
{
    for(int i=1;i<=No;i++)
    {
        cout<<ch<<"\t";
    }
    cout<<endl;
}

int main()
{
    Display('M',7);
    
    Display(3,6);
    
    Display(11.23,5);
    
    
    return 0;
}
