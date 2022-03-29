#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[20]="omkar";
	char b[20]="jadhav";
	
	cout<<"\n Join two strings:"<<strcat(a,b);
	cout<<"\n find length:"<<strlen(a);
	cout<<"\n compare two strings:"<<strcmp(a,b);
	cout<<"\n convert into upper case:"<<strupr(b);
	cout<<"\n copy one string into another:"<<strcpy(a,b);
}
