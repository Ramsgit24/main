#include<stdio.h>
int prime();
int main()
{
	int a;
	a=prime();
	printf("a value is %d\n",a);
}
int prime()
{
	int x=2,i,p=0;
	printf("enter the i value\n");
	scanf("%d",&i);
	while(x<=i)
	{
		if(i%x==0)
		{
			p++;
		}
		x++;
	}
	if(p==1)
	{
		printf("is a prime\n"); 
	}
	else
	{
		printf("is not a prime\n");

	}
	return i;
}