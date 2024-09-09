#include<stdio.h>
void swap(int*,int*);
int* fun();
int* add(int*,int*);
int main()
{
	int x,y;
	int *t=fun();
	int *s;
	x=10;
	y=20;
	swap(&x,&y);
	s=add(&x,&y);
	printf("%d-%d\n",x,y);
	//printf("%d\n",*t); dangling pointer fun call stack deleted but pointer holding dead location
	printf("%d\n",*t);// to avoid dangling pointer make static storage specifier
	printf("%d\n",*s);
}
void swap(int* a,int* b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int* add(int* a,int* b)
{
	static int c;
	c=*a+*b;
	return &c;
}
int *fun()
{
	int a,b;
	static int c;
	a=10;
	b=20;
	c=a+b;
	return &c;

}