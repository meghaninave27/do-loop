//Write a Program to print even numbers from 1 to N using a do-while loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	do
	{
		if(i%2==0)
		printf("%d\n",i);
		i++;
	
	
	}while(i<=n);
}
