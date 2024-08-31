#include<stdio.h>
#define row1 2
#define col1 3
#define row2 col1
#define col2 4
int main(){
	int i,j,k;
	int arr[row1][col1];
	int brr[row2][col2];
	int crr[row1][col2];
	printf("enter the 1st matrix size (%d*%d) :\n",row1,col1);
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("entered the 1st matrix size (%d*%d) is :\n",row1,col1);
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	printf("enter the 2nd matrix size (%d*%d) :\n",row2,col2);
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&brr[i][j]);
		}
	}
	printf("enter the 2nd matrix size (%d*%d) :\n",row2,col2);
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			printf("%d ",brr[i][j]);
		}
		printf("\n");
	}
	//multiplication
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			crr[i][j]=0;
			for(k=0;k<col1;k++){
				crr[i][j]=crr[i][j]+ arr[i][k]*brr[k][j];
			}			
		}
	}
	printf("multiplication of two matrices is :\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			printf("%d ",crr[i][j]);
		}
		printf("\n");
	}
}