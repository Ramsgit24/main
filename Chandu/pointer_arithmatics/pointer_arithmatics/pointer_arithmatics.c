#include<stdio.h>
int main()
{
	int x,y;
	int *ptr=&x;
	int *qtr=&y;
	printf("%p\n",ptr);
	//int *tptr=ptr+qtr;// compile time error we cant add two addresses
	x=10;
	y=20;
	ptr=ptr+1;//we can increment the address
	printf("%p\n",ptr);
}