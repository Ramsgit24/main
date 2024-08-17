#include<stdio.h>
int Thala(int);
int main()
{
	int x;
	printf("enter a number \n");
	x=Thala(x);
	scanf("%d\n",&x);
	
}
int Thala(int y)
{
	if(y%2==0)
	{
		printf("even %d",y);
	}
	else
	{
		printf("odd \n %d",y);
}
return y;
}