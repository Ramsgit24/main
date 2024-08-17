#include<stdio.h>
int main()
{
	int i,j,k,l;
	int a[2]={1,2};
	int b[2][2]={{1,2,},{3,4}};
	//int c[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
	int c[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
	int d[2][2][2][2] = {{{ {1, 2}, {3, 4} },{ {5, 6}, {7, 8} }},{{ {9, 10}, {11, 12} },{ {13, 14}, {15, 16} } }};
	printf("1D array\n");
	for(i=0;i<2;i++)
	{
		printf("%d ",a[i],*(a+i));
	}
	printf("\n");
	printf("%p-%d\n",&a[i],(a+i));

	printf("2D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j],*(*(b+i)+j));
		}
	}
	printf("\n");
	printf("%d-%p\n",&b[i][j],(*(b+i)+j));
	printf("3D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d ",c[i][j][k],*(*(*(c+i)+j)+k));
			}
		}
	}
	printf("\n");
	printf("%d-%p\n",&c[i][j][k],(*(*(c+i)+j)+k));
	printf("4D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				for(l=0;l<2;l++)
				{
					printf("%d ",d[i][j][k][l],*(*(*(*(d+i)+j)+k)+l));
				}
			}
		}
	}
	printf("\n");
	printf("%d-%p\n",&d[i][j][k][l],*(*(*(c+i)+j)+k)+l);
	return 0;
}