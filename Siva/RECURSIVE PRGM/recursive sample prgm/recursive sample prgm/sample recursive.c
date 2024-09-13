#include<stdio.h>
void display(int);
void main()
{
	display(5);
	printf("main\n");
}
void display(int x)
{
	if(x!=0)
	{
		printf("hello %d \n",x);
		x--;
		display(x);
	}
	printf("good morning %d \n ",x);
}
