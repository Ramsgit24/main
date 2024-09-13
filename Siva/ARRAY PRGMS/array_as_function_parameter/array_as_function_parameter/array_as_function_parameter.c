#include<stdio.h>
void fun(int[]);
void fun1(char[]);
void main()
{
	int a[5]={10,20,30,40,50};
	char b[4]={'s','i','v','a'};
	fun(a);
	fun1(b);
}
void fun(int c[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
}
void fun1(char d[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%c",d[i]);
	}
	printf("\n");
}