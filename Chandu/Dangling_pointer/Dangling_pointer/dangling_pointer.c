#include<stdio.h>
int main()
{
	int x=10;
	int *ptr=&x;
	int *qtr=ptr;
	*ptr=0;
	printf("%d\n",*qtr);//which holds dead memory location
}