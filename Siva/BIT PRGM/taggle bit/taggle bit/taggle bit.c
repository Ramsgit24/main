#include<stdio.h>
int tagle(int,int);
int main()
{
	int a;
	a=tagle(8,2);
	printf("%d",a);
}
int tagle(int x,int pos)
{
	return x=x^(1<<pos);
	
}