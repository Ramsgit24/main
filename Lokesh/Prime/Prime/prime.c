#include<stdio.h>
int main()
{
	int i,n,count;
	i=1;
	count=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
		count++;
		}
		i++;
	}
	if(count==2)
	{
		printf("prime number%d");
	}
	else
	{
		printf("not prime");
	}
}
/*#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter a number:");
	scanf("%d",&n);
	do
	{
		if(n%i==0)
			count++;
	}
	while(i<=n);
	     if(count==1)
		 {
			 printf("prime ");
		 }
		 else
		 {
			 printf("not prime");
		 }
	
}8/

