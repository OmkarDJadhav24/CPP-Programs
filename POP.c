#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
	auto int iAns=0;
	iAns=iNo1 + iNo2;
	return iAns;
}

int Substraction(int iNo1,int iNo2)
{
	auto int iAns=0;
	iAns=iNo1 - iNo2;
	return iAns;
}
int main()
{
	auto int ivalue1=0,ivalue2=0,ivalue3=0;
	auto int iret1=0;
	auto int iret2=0;
	
	printf("Enter the first number:");
	scanf("%d",&ivalue1);
	
	printf("Enter the second number:");
	scanf("%d",&ivalue2);
	
	iret1=Addition(ivalue1,ivalue2);
	printf("Addition:%d",iret1);
	
	iret2=Addition(ivalue1,ivalue2);
	printf("\nSubstraction:%d",iret2);
	
	
	return 0;
}