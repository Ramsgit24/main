#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
float sum(float a,float b)
{
	int d;
	d=a+b;
	return d;
}
int main()
{
	int x=add(12,23);
	float y=sum(8.2 , 7.9);
	printf("%d %f",x,y);
}


