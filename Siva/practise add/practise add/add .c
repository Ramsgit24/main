#include<stdio.h>
int add (int,int);
float sum(float,float);
int main()
{
	int x;
	float y;
	x=add(10,20);
	printf("%d\n",x);
	y=sum(11.11,22.22);
	printf("%f\n",y);
}
int add(int a,int b)
{
	int c;
	//a=10;
	//b=10;
	c=a+b;
	return c;
}
float sum(float a,float b)
{
	float c;
	//a=20.00f;
	//b=20.00f;
	c=a+b;
	return c;
}


	