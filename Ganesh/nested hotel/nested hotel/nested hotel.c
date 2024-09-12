#include<stdio.h>
int main()
{
	int a,b;
	printf("select 1 for tiffen\n");
	printf("select 2 for fast food\n");
	printf(" \n");
	printf("enter in put: ");
	scanf_s("%d",&a);
	if(a==1)
	{
		printf("1.poori 2.dosa 3.idly");
		printf("  \n");
		scanf("%d",&b);
		if(b==1)
		{
			printf("poori selected!\n");
		}
		else if(b==2)
		{
			printf("dosa selected!\n");
		}
		else if(b==3)
		{
			printf("idly selected!\n");
		}
		else
		{
			printf("invalid input !\n");
		}
	}
	if(a==2)
	{
		printf("1.egg rice 2.noodiles 3.gobi");
		printf("  \n");
		scanf("%d",&b);
		if(b==1)
		{
			printf("egg rice selected!\n");
		}
		else if(b==2)
		{
			printf("noodiles selected!\n");
		}
		else if(b==3)
		{
			printf("gobi selected!\n");
		}
		else
		{
			printf("invalid input !\n");
		}
	}
}