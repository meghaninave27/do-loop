//wap to find sum of n num.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,mul=1;
	printf("enter n :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		mul=mul*i;
		i++;
		
	}
	printf("multiplication is %d",mul);
}
