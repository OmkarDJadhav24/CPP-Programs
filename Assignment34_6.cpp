#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
    	T *Arr;
    	int Size;
    	
    	ArrayX(int value)        // Constructor
    	{
    	    Size = value;
    	    Arr = new T[Size];
    	}
    	
    	~ArrayX()                        //Destructor
    	{
    	    delete []Arr;
    	}
    	
    	void Accept()
    	{
    	    cout<<"Enter the elements: "<<endl;
    	    for(int i=0;i<Size;i++)
    	    {
    	        cin>>Arr[i];
    	    }
    	}
    	
    	void Display()
    	{
    	    cout<<"Elements of Array are: "<<endl;
    	    for(int i=0;i<Size;i++)
    	    {
    	        cout<<Arr[i]<<endl;
    	    }
    	}
    	
    	T Maximum()
    	{
    	    T Max = Arr[0];
    	    for(int i=0;i<Size;i++)
    	    {
    	        if(Max<Arr[i])
    	        {
    	            Max = Arr[i];
    	        }    	        
    	    }
    	    return Max;
    	}
 
};
int main()
{
    ArrayX <int>obj1(5);
    obj1.Accept();
    obj1.Display();
    int iRet=obj1.Maximum();
    cout<<"Largest number is: "<<iRet<<endl;
    
    ArrayX <float>obj2(5);
    obj2.Accept();
    obj2.Display();
    float fRet=obj2.Maximum();
    cout<<"Largest number is: "<<fRet<<endl;
    
    return 0;
}
