#include<stdio.h>
void fun(int[]);
void main()
{
	int a[5]={1,2,3,4,5};
	fun(a);
}
void fun(int b[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\n",b[i]);
	}
}


#include<stdio.h>
void fun(char[]);
void main()
{
	char ch[5]={'A','B','C','D','E'};
	fun(ch);
}
void fun(char C[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",C[i]);
	}
}


#include<stdio.h>
void fun(float[]);
void main()
{
	float a[7]={11,22,33,44,55,66,77};
	fun(a);
}
void fun(float C[])
{
	int i;
	for(i=0;i<7;i++)
	{
		printf("%f ",C[i]);
	}
}


#include<stdio.h>
void fun(double[]);
void main()
{
	double a[7]={11,22,33,44,55,66,77};
	fun(a);
}
void fun(double C[])
{
	int i;
	for(i=0;i<7;i++)
	{
		printf("%lf ",C[i]);
	}
}