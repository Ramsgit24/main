#include<stdio.h>
int main()
{
	int a,i,count=0;
	printf("enter a number\n");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
			//break;
		}
	}
	if(count==1)
	{
		printf("it is a prime number\n");
	}
	else
	{
		printf("it is not a prime number\n");
	}
}