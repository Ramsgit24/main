#include<stdio.h>
int main()
{
	int num,a,b,c,i;
	a=0;
	b=1;
	printf("enter a number");
	scanf("%d",&num);
	if(num==1)
	{
		printf("%d ",a);
	}
	else if(num==2)
	{
		printf("%d ",a);
		printf("%d ",b);
	}
	else
	{
		printf("%d ",a);
		printf("%d ",b);

		for(i=3;i<=num;i++)
		{
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
	}
}