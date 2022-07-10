#include<iostream>
using namespace std;

class VowelChk
{
   private:
   	char ch;
   	
   public:
   	void Accept()
   	{
   	   cout<<"Enter the character:"<<endl;
   	   cin>>this->ch;
   	}
   	
   	void Display()
   	{
   	   cout<<"Character is:"<<this->ch<<endl;
   	}
   	
   	void CheckChar()
   	{
   	   if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'))
   	   {
   	       cout<<ch<<" is vowel"<<endl;
   	   }
   	   else
   	   {
   	       cout<<ch<< " is not vowel"<<endl;
   	   }
   	}

};
int main()
{
   VowelChk obj;
   obj.Accept();
   obj.Display();
   obj.CheckChar();
   
   return 0;
}
