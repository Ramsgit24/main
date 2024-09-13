#include<stdio.h>
int main()
{
	int x=10;
	int *s=&x;
	*s=100;
	
	printf("the values of x is  %d\n",x);
	printf("the address of X is  %p\n",&x);
	printf("the pointer values is %d\n",*s);
	printf("the address of pointer is %p\n",&s);
	printf("the value of s is %p \n",s);

}