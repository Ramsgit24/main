#include<stdio.h>

void fun(int[],char[]);

void main()
{
	int a[5]={1,2,3,4,5};
	char c[6]={'c','h','a','n','d','u'};
	fun(a,c);
}

void fun(int b[], char d[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d-%d\n",b[i],*(b+i));
		printf("%p-%p\n",&b[i],(b+i));
	}
	for(i=0;i<6;i++)
	{
		printf("%c-%c\n",d[i],*(d+i));
		printf("%p-%p\n",&d[i],(d+i));
	}
}


