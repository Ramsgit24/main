#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	int a[2][2][2][2][2][2]=
	{
		{{{{			{1,2},
						{3,4}
					},
					{	{5,6},
						{7,8}
					}},
				    {{	{9,10},
						{11,12}
					},{	{13,14},
						{15,16}
					}}},
			        {{{
						{17,18},
						{19,20}
					},{
						{21,22},
						{23,24}
					}},
					{{
						{25,26},
						{27,28}
					},{
						{29,30},
						{31,32}
					}}}},
					{{{{ 
				        {33,34},
						{35,36}
					},{
						{37,38},
						{39,40}
					}},
					{{
						{41,42},
						{43,44}
					},{
						{45,46},
						{47,48}
					}}},
			        {{{
						{49,50},
						{51,52}
					},{
						{53,54},
						{55,56}
					}},
					{{
						{57,58},
						{59,60}
					},
					{
						{61,62},
						{63,64}
					}}}}
	};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				for(l=0;l<2;l++){
					for(m=0;m<2;m++){
						for(n=0;n<2;n++){
							printf("%d ",a[i][j][k][l][m][n]);
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