#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of %d numbers =%d",n,sum);
	return 0;
	}


