#include<stdio.h>
int main()
{
	int n,remainder,sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	printf("sum: %d",sum);
}