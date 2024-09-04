//WAP to fac of n num
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,f=1;
	printf("enter n:");
	scanf("%d",&n);
	
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	printf("f is %d",f);
}
