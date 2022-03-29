#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	int index=0;
	do
	{
		printf("\n%d",index);
		index=index+1;
	}
	while(index<num);
}
