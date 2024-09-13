#include<stdio.h>
int main()
{
	int n,r,t,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(t==sum)
	{
		printf("the number is armstrong %d\n");
	}
	else
	{
		printf("the number is not a armstrong\n");
	}
}