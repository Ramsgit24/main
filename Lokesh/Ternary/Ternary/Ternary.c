#include<stdio.h>
int main()
{
	int x,y,z;
	x=10;
	y=20;
	z=30;
	//z=(x>y)?x:y;  ternary operation
	z=(x>y)?((x>z)?x:y):((y>z)?y:z);
	printf("the value %d \n",z);
}