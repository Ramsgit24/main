
#include<stdio.h>
int fact();
int main()
{
	int x;

	x=fact();	
	printf("%d\n",x);
}
int fact()
{
	int i,n,fact=1;
	printf("enter a number");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;//fact*=i;
	}

	return fact;

}









