#include<stdio.h>
int main()
{
	int n=5;
	long long factorial;
    printf("enter a number");
	scanf("%d",&n);
	factorial=1;
	while(n>0)
	{
		factorial=factorial*n;
		--n;
	}
	printf("factorial %d",factorial);
	return 0;
}


