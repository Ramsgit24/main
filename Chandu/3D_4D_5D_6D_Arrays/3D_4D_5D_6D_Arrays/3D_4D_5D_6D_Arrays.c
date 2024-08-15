#include<stdio.h>

main()
{
	int i,j,k,l,m,n;
	int a[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};

	int b[2][2][2][2]={{{{1,2},{3,4}},{{5,6},{7,8}}},{{{9,10},{11,12}},{{13,14},{15,16}}}};

	int c[2][2][2][2][2]={{{{{1,2},{3,4}},{{5,6},{7,8}}},{{{9,10},{11,12}},{{13,14},{15,16}}}},
	{{{{17,18},{19,20}},{{21,22},{23,24}}},{{{25,26},{27,28}},{{29,30},{31,32}}}}};

	int d[2][2][2][2][2][2]={{{{{{1,2},{3,4}},{{5,6},{7,8}}},{{{9,10},{11,12}},{{13,14},{15,16}}}},
	{{{{17,18},{19,20}},{{21,22},{23,24}}},{{{25,26},{27,28}},{{29,30},{31,32}}}}},
	{{{{{33,34},{35,36}},{{37,38},{39,40}}},{{{41,42},{43,44}},{{45,46},{47,48}}}},
	{{{{49,50},{51,52}},{{53,54},{55,56}}},{{{57,58},{59,60}},{{61,62},{63,64}}}}}};


	printf("3D array elements: \n\n");
	for(i=0;i<2;i++)
	{
		printf("layler %d\n\t",i);
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d  ",a[i][j][k]);
			}
			printf("\n\t");
		}
		printf("\n");
	}

	printf("4D array elements: \n\n");
	for(i=0;i<2;i++)
	{
		printf("Block %d\n",i);
		for(j=0;j<2;j++)
		{
			printf("layler %d\n\n",j);
			for(k=0;k<2;k++)
			{
				for(l=0;l<2;l++)
				{
					printf("%d ",b[i][j][k][l]);
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("5D array elements: \n");
	for(i=0;i<2;i++)
	{
		printf("level %d\n",i);
		for(j=0;j<2;j++)
		{
			printf("Block %d\n",j);
			for(k=0;k<2;k++)
			{
				printf("layer %d\n\n",k);
				for(l=0;l<2;l++)
				{
					for(m=0;m<2;m++)
					{
						printf("%d ",c[i][j][k][l][m]);
					}
					printf("\n");
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("6D array elements: \n");
	for(i=0;i<2;i++)
	{
		printf("cube %d\n",i);
		for(j=0;j<2;j++)
		{
			printf("level %d\n",j);
			for(k=0;k<2;k++)
			{
				printf("Block %d\n",k);
				for(l=0;l<2;l++)
				{
					printf("layer %d\n\n",l);
					for(m=0;m<2;m++)
					{
						for(n=0;n<2;n++)
						{
							printf("%d ",d[i][j][k][l][m][n]);
						}
						printf("\n");
					}
					printf("\n");
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}
}