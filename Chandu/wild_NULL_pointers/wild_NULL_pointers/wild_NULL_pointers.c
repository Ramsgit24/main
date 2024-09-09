#include<stdio.h>
int main()
{
	//int *ptr;//wild pointer i.e., unintialised pointer
	int *ptr1=NULL;//null pointer which holds 0th memory location
	//printf("%d",ptr);//we cant access wild pointer that leads to runtime error
	printf("%d\n",ptr1);
	if(ptr1!=NULL)
	{
		*ptr1=30;
	}
	//printf("%d\n",ptr);
}