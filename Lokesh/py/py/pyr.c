#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter a number : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			if(j>=n-(i-1) && (j<=n+(i-1)))
			{
				printf("x");
			}
			printf(" ");
		}
		printf("\n");
	}
}
