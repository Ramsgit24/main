#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("enter the value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  fact=fact*i;//fact*=i;
	 // printf("%d factorial value is %d\n",i,fact);
	}
	 printf("%d factorial value is %d\n",n,fact);
	return 0;
}
