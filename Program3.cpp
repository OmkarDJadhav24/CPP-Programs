#include<iostream>
using namespace std;

class ChkLetter
{
   private:
   	char ch;
   	
   public:
   	void Accept()
   	{
   	    cout<<"Enter the character:"<<endl;
   	    cin>>ch;
   	}
   	
   	void Display()
   	{
   	    cout<<"Character is:"<<this->ch<<endl;
   	}
   	
   	void ChkVowel()
   	{
   	   if((this->ch>='A' && this->ch<='Z'))
   	   {
   	      this->ch = tolower(this->ch);
   	      cout<<"After convert: "<<this->ch<<endl;
   	   }
   	   else if((this->ch>='a' && this->ch<='z'))
   	   {
   	      this->ch = toupper(this->ch);
   	      cout<<"After convert: "<<this->ch<<endl;
   	   }
   	}
};
int main()
{
   ChkLetter obj;
   obj.Accept();
   obj.Display();
   obj.ChkVowel();
   
   return 0;
}
