#include<stdio.h>
void disp();
void fun();

int main()
{
	void (*fptr[])()={disp,fun};
	
	(*fptr[0])();
	(*fptr[1])();
	
}
void disp()
{
	printf("hello disp\n");
}
void fun()
{
	printf("hello fun\n");
}
