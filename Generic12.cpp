#include<iostream>
using namespace std;

template<class T>
struct node
{
    T Data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    public:
    	struct node<T> *Head;
    	int Count;
    	
    	SinglyLL();
    	void InsertFirst(T);
    	void InsertLast(T);
    	void InsertAtPos(T,int);
    	void DeleteFirst();
    	void DeleteLast();
    	void DeleteAtPos(int);
    	void Display();
    	int CountNodes();
    	
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    Head = NULL;
    Count = 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;
    
    newn->Data = no;
    newn->next = NULL;
    
    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
         newn->next = Head;
         Head = newn;
    }
    Count++;
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;
    
    newn->Data = no;
    newn->next = NULL;
    
    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        struct node<T> *Temp = Head;
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
    Count++;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements from linked list are:"<<endl;
    struct node<T> *Temp = Head;
    
    while(Temp != NULL)
    {
       cout<<Temp->Data<<"=>";
       Temp = Temp->next;
    }
    cout<<endl;
}

template <class T>
int SinglyLL<T>::CountNodes()
{
    return Count;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No,int Pos)
{
   int Ret = 0;
   Ret = CountNodes();
   
   if((Pos<1) || (Pos>(Ret+1)))
   {
      cout<<"Invalide Position"<<endl;
      return;
   }
   
   if(Pos == 1)
   {
      InsertFirst(No);
   }
   else if(Pos == (Ret+1))
   {
      InsertLast(No);
   }
   
   else
   {
       int iCnt = 0;
       struct node<T> *newn = NULL;
       struct node<T> *Temp = Head;
       
       newn = new node<T>;
       newn->Data = No;
       newn->next = NULL;
       
       for(iCnt=1;iCnt<(Pos-1);iCnt++)
       {
          Temp = Temp->next;
       }
       newn->next = Temp->next;
       Temp->next = newn;
   }
   Count++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
   struct node<T> *Temp = NULL;
   
   
   if(Head == NULL)
   {
      return;
   }
   else
   {
      Temp = Head;
      Head = Head->next; 
      delete Temp;
   }
   Count--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
   struct node<T> *Temp = Head;
   struct node<T> *DTemp = NULL;
   
   
   if(Head == NULL)
   {
      return;
   }
   else if(Head->next ==NULL)
   {
      delete Head;
      Head = NULL;
   }
   else
   {
       while(Temp->next->next != NULL)
       {
          Temp = Temp->next;
       }
       DTemp = Temp->next;
       Temp->next = NULL;
       delete DTemp;
   }
   Count--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int Pos)
{
   int Ret = 0;
   Ret = CountNodes();
   
   if((Pos<1) || (Pos>Ret))
   {
       cout<<"Invalide Position"<<endl;
       return;     
   }
   
   if(Pos == 1)
   {
       DeleteFirst();
   }
   else if(Pos == Ret)
   {
       DeleteLast();
   }
   else
   {
       int iCnt = 0;
       struct node<T> *Temp = Head;
       struct node<T> *DTemp = NULL;
       
      
       for(iCnt=1;iCnt<(Pos-1);iCnt++)
       {
           Temp = Temp->next;
       }
       DTemp = Temp->next;
       Temp->next = DTemp->next;
       delete DTemp;
   }
   Count--;

}


int main()
{
    SinglyLL <int>obj1;
    
    SinglyLL <float>obj2;
    
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(51);
    obj1.InsertLast(101);
        
    obj1.InsertAtPos(31,3);
    obj1.Display();
    cout<<"Number of nodes are: "<<obj1.CountNodes()<<endl;
    
    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.DeleteAtPos(2);
    obj1.Display();
    cout<<"Number of nodes are: "<<obj1.CountNodes()<<endl;
    
    obj2.InsertFirst(21.11);
    obj2.InsertFirst(11.14);
    obj2.InsertLast(51.45);
    obj2.InsertLast(101.48);
    
    obj2.InsertAtPos(31.12,3);
    obj2.Display();
    cout<<"Number of nodes are: "<<obj2.CountNodes()<<endl;
    
    obj2.DeleteFirst();
    obj2.DeleteLast();
    obj2.DeleteAtPos(2);
    obj2.Display();
    cout<<"Number of nodes are: "<<obj2.CountNodes()<<endl;
    
    return 0;
}
