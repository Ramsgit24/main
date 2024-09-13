#include<stdio.h>
int main()
{
	int n,i,count=0;
    printf("enter the number: \n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("%d the number is prime\n",n);
	}
	else
	{
		printf("%d the number is not prime\n",n);
	}
}