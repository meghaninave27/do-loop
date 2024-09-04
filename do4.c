//wap to find sum of n num.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
		
	}
	printf("sum is %d",sum);
}
