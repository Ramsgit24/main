#include<stdio.h>
int main(){
	int i,j,k,l;
	int arr[2][2][2][2]={
		{
			{
				{1,2},
				{3,4}
			},
			{
				{5,6},
				{7,8}
			},
		},
		{
			{
				{9,10},
				{11,12}
			},
			{
				{13,14},
				{15,16}
			}
		}
	};

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				for(l=0;l<2;l++){
					printf("%d-%p ",arr[i][j][k][l],&arr[i][j][k][l]);
					printf("%d-%p ", *(*(*(*(arr+i)+j)+k)+l), *(*(*(arr+i)+j)+k)+l);				
				}
				printf("\n");
			}
			printf("\n");
		}
		printf("\n");
	}

}