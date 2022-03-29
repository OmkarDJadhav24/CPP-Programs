#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		string name;
		string course;
		
	void Introduction()
	{
		cout<<"\nThe id of student is:"<<id;
		cout<<"\nThe name of the student is:"<<name;
		cout<<"\nThe course of the student is:"<<course;
	}
	Student(int i,string n,string c)
	{
		id=i;
		name=n;
		course=c;
	}
};

int main()
{
	Student s1=Student(1,"omkar","Mcs");
	s1.Introduction();
	Student s2=Student(2,"Abhishekh","Bcs");
	s2.Introduction();
	Student s3=Student(3,"Swapnil","Bcom");
	s3.Introduction();
}
