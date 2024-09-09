#include<stdio.h>
void armstrong();
int main()
{
	armstrong();
}
void armstrong()
{
	int n,r,sum=0,t;
	printf("armstrong or not\n\n");
	printf("aenter a value\n");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==t)
	{
		printf("armstrong\n");
	}
	else
	{
		printf("not an armstrong\n");
	}
}
