#include<stdio.h>
int main()
{
	char x;
	printf("enter day letter\n ");
	scanf("%c",&x);
	if(x=='S')
	{
		printf("Sunday\n");
	}
	else if(x=='m')
	{ 
		printf("monday\n");
	}
	else if(x=='T')
	{
		printf("Tuesday\n");
	}
	else if(x=='w')
	{
		printf("wednesday\n");
	}
	else if(x=='t')
	{
		printf("thursday\n");
	}
	else if(x=='f')
	{
		printf("friday\n");
	}
	else if(x=='s')
	{
		printf("saturday\n");
	}
	else 
	{
		printf("invalid\n");
	}
	return 0;
}

	

