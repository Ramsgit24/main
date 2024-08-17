#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n<0)
	{
		printf("negitive number:%d ",n);
	}
	else
		printf("error");
}