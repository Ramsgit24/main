#include<stdio.h>
int add()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a+b;
	return c;
}
int main()
{
	int t;
	printf("enter a value\n");
	t=add();
		printf("print the value %d \n",t);
}