#include<iostream>
using namespace std;

template<class T>
class Arithematic
{
   public:
      T No1;
      T No2;
      
      Arithematic(T a,T b)
      {
          No1 = a;
          No2 = b;   
      }
            
      T Addition()
      {
          T ans = 0;
          ans = No1 + No2;
          return ans;
      }
      

};
int main()
{
   Arithematic <int> obj(20,10);
   int Ret = obj.Addition();
   cout<<"Addition is:"<<Ret<<"\n";
   
   Arithematic <float> obj2(20.4,10.2);
   float fret = obj2.Addition();
   cout<<"Addition is:"<<fret<<"\n";
   
   return 0;
}
