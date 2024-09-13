#include<stdio.h>
void recursive(int);
int main()
{
	recursive(5);
}
void recursive(int x)
{
	if(x>0)
	{
	printf("shiva %d\n",x);
	x--;
	recursive(x);
	printf("shiva12345 %d\n",x);
	}
}
