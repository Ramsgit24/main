#include<stdio.h>
void fun(int*,int*);
int main()
{
	int x,y;
	x=10;
	y=20;
	fun(&x,&y);
	printf("x=%d y=%d\n",x,y);

}
void fun(int*a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	printf("t=%d\n",t);
	printf("a=%d b=%d\n",a,b);
}
