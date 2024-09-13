#include<stdio.h>
int main()
{
	int x=10;
	int *ptr=&x;
	*ptr=100;
	printf("%d %d\n",*ptr,x);
}
