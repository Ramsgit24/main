#include<stdio.h>
int main()
{
	int year;
	printf("enter a year");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("%d is a leaf year\n",year);
	}
	else if(year%100==0)
	{
		printf("%d is a not leaf year\n",year);
	}
	else if(year%4==0)
	{
		printf("%d is leaf year\n",year);
	}
	else
	{
		printf("%d is a not leaf year\n",year);
	}
	return 0;
}

