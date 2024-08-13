#include<stdio.h>
int x=1,c=0;
int prime(int);
int main()
{
	int i,a;
	printf("enter a value to check the prime number\n");
	scanf("%d",&i);
	a=prime(i);
	if(a==2)
	{
		printf("it is a prime number\n");
	}

	else
	{
		printf("it is not a prime number\n");
	}
}
int prime(int i)
{
	if(x<=i)
	{
		if(i%x==0)
		{
			c++;
		}
		x++;
		prime(i);
	}
	 return c;
}