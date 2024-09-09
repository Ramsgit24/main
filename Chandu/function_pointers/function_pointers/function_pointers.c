#include<stdio.h>
void disp();
int fun(int);

int main()
{
	int y,x=10;
	void (*fptr)()=disp;
	int (*fptr1)(int)=fun;
	(*fptr)();
	y=(*fptr1)(x);
	printf("%d\n",y);
}
void disp()
{
	printf("hello disp\n");
}
int fun(int i)
{
	int t=10;
	t=t*i;
	return t;
}
