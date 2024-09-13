#include<stdio.h>
int even();
int main()
{
	int a;
	a=even();
	printf("%d",a);
}
int even()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	return n%2==0;
		/*if(n%2==0)
		{
		printf("the number is even\n",n);
		}
		else
		{
		printf("the number is odd\n",n);
		}*/
}


