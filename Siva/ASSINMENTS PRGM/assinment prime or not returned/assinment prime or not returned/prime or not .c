#include<stdio.h>
int prime();
int main()
{
	prime();
}
int prime()
{
	int a,b,count=0,d;
	printf("enter the value: ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		{
			count++;
		}
	}
		if(count==2)
		{
			printf(" the number is prime\n");
		}
		else
		{
			printf("the number is not prime\n");
		}
}

