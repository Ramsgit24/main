#include<stdio.h>
int main()
{
	int i,j,k,l,m;
	int x[2]={10,20};
	int y[2][2]={{10,20},
	{30,40}
	};
	int z[2][2][2]={{{10,20},
	{30,40}
	},
	{{50,60},
	{70,80}
	}
	};
	int d[2][2][2][2]={{{{10,20},{30,40}},{{50,60},{70,80}}},{{{90,100},{300,400}},{{500,600},{700,800}}}};
	int e[2][2][2][2][2]={{{{{1,2},{3,4}},{{5,6},{7,8}}},{{{9,10},{11,12}},{{13,14},{15,16}}}},{{{{17,18},{19,20}},{{21,22},{23,24}}},{{{25,26},{27,28}},{{29,30},{31,32}}}}};
	printf("1 D array\n");
	for(i=0;i<2;i++)
	{
		printf("%d-%d\n",x[i],*(x+i));
		printf("%p-%p\n",&x[i],(x+i));
		
	}
	printf("2 D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d-%d\n",y[i][j],*(*(y+i)+j));
			printf("%p-%p\n",&y[i][j],(*(y+i)+j));
		}
	}
	printf("3 D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d-%d\n",z[i][j][k],*(*(*(z+i)+j)+k));
				printf("%p-%p\n",&z[i][j][k],(*(*(z+i)+j)+k));
			}
		}
	}
	printf("4 D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				for(l=0;l<2;l++)
				{
					printf("%d-%d\n",d[i][j][k][l],*(*(*(*(d+i)+j)+k)+l));
					printf("%p-%p\n",&d[i][j][k][l],(*(*(*(d+i)+j)+k)+l));
				}
			}
		}
	}
	printf("5 D array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				for(l=0;l<2;l++)
				{
					for(m=0;m<2;m++)
					{
						printf("%d-%d\n",e[i][j][k][l][m],*(*(*(*(*(e+i)+j)+k)+l)+m));
						printf("%p-%p\n",&e[i][j][k][l][m],(*(*(*(*(e+i)+j)+k)+l)+m));
					}
				}
			}
		}
	}

	return 0;
}