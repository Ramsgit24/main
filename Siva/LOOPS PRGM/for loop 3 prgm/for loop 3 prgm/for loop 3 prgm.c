# include<stdio.h>
int main()
{
	int i,j,k,s;
	s=5;
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=(s-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
