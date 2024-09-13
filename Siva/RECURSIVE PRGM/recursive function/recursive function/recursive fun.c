#include<stdio.h>
int i=0;            
int fun()
{
	i++;
	if(i==5)
	{
		return 0;
	}
	else
	{
		printf("hello sample\n");
		fun();
	}
}
 int main()
{
	fun();
}