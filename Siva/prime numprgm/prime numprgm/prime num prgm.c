#include<stdio.h>
int main()
{
	int x,i,count;
	x=2;
	count=0;
	scanf("%d",&i);
	while(x<=i)
	{
		if(i%x==0)
		{
			count++;
		}
		x++;
	}
	if(count==1)
	{
		printf("the given number is prime\n");
	}
	else
	{
		printf("the given number is not prime number\n");
	}
}

