#include <stdio.h>
int main()
{
	double number;
	printf("enter the value ");
	scanf("%lf",&number);
	if(number<0)
	{
		printf("%lf the number is negative\n",number);
	}
	else if(number>0)
	{
		printf("%lf the number is positive\n",number);
	}
	else
	{
		printf("it is zero\n");
	}
	return 0;
}
